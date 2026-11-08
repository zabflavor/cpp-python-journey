import torch      # 导入 PyTorch 主包：提供 Tensor、张量运算、自动求导等深度学习基础能力
import torchvision  # 导入 torchvision：PyTorch 生态中的视觉工具包。
                    # 这里后面用它打印版本号；数据集和图像变换则从下面的子模块导入
from torchvision import datasets, transforms  # datasets：提供 MNIST 等常见数据集的读取接口
                                              # transforms：提供图像预处理操作；本文件使用 ToTensor()
from torch.utils.data import DataLoader  # DataLoader：把 Dataset 包装成可迭代的数据批次，并支持打乱样本顺序等功能
from torch import nn,optim  # nn：神经网络层、损失函数等模块 optim：优化器模块；本文件使用 Adam 更新模型参数
import sys   # sys 用于访问当前 Python 解释器等运行环境信息。
print(sys.executable)  # 打印当前解释器路径，用来确认没跑错环境
print(torch.__version__, torchvision.__version__)  # 打印 PyTorch 和 torchvision 的版本号，方便检查环境与排查兼容性问题
# 创建 MNIST 训练集对象
dataset = datasets.MNIST(root=r"D:\zab\mnist-data",  # 数据集根目录；r 前缀表示原始字符串，反斜杠不会被当作转义符
                         train=True,  # True 表示读取训练集（标准 MNIST 训练集有 60,000 张图）；False 表示测试集
                         download=False,  # 不自动下载数据；因此指定目录下必须已经有可读取的 MNIST 文件
                         transform=transforms.ToTensor()  # 读取每张图片时转为 Tensor；像素通常从 0～255 映射到 0～1
                         )                                # 并把图像维度整理成 [通道数, 高, 宽]，MNIST 即 [1, 28, 28]
# 打印训练集样本总数；标准 MNIST 训练集通常输出 60000
print(len(dataset))
# 打印第 0 个样本，返回一个二元组：(图片 Tensor, 标签)。
# 图片是经过 ToTensor() 处理的张量；标签是 0～9 的整数类别。
# 直接打印图片 Tensor 会输出大量数值，主要用于检查数据是否读入成功
print(dataset[0])
# 取出第 0 个样本的图片部分（dataset[0][0]），查看其张量形状。
# 预期为 torch.Size([1, 28, 28])，分别代表 1 个通道、28 像素高、28 像素宽
print(dataset[0][0].shape)
# 将 Dataset 包装成 DataLoader，以批次形式向训练循环提供数据
train_loader = DataLoader(dataset,
                          batch_size=64,  # 每个 batch 最多包含 64 张图片及对应标签；最后一个 batch 可能不足 64 张
                          shuffle=True  # 每轮打乱顺序，否则模型会先学“全是 0”再学“全是 1”,常用于训练，避免模型总按固定顺序看到样本
                          )
# 打印一个 epoch 中有多少个 batch。
# 60000 个样本、每批 64 个，默认不丢弃最后不足 64 个的批次，因此约为 938 个 batch
print(len(train_loader))
# 从 DataLoader 取出一个 batch，检查批量数据的形状。
# images 是图片批次，labels 是与图片一一对应的类别标签
for images,labels in train_loader:
    # 预期 images.shape 为 [64, 1, 28, 28]（最后一批除外）
    # 维度依次是：批次大小、通道数、图片高度、图片宽度
    print(images.shape)
    # 预期 labels.shape 为 [64]（最后一批除外），每个元素对应一张图片的数字标签
    print(labels.shape)
    # 只检查第一个 batch；break 会立刻结束这个 for 循环
    # 这段代码只是检查数据形状，不会训练模型
    break
# 创建 MNIST 测试集对象
test_ds = datasets.MNIST(
    root=r"D:\zab\mnist-data",   # 与训练集使用同一个数据根目录
    train=False,  # False 表示读取测试集；标准 MNIST 测试集有 10,000 张图
    download=False,   # 不下载，要求测试集文件已经存在
    transform=transforms.ToTensor()  # 对测试图片执行与训练集相同的张量转换
)
# 把测试集包装成 DataLoader，供后面的模型评估循环分批读取
test_loader = DataLoader(
    test_ds,
    batch_size=64,  # 每批最多 64 张测试图片
    shuffle=False)  # 测试时通常不必打乱顺序；评估结果不依赖样本的遍历顺序
print(len(test_loader))
# 定义一个神经网络类 Net，并继承 nn.Module。
# 继承 nn.Module 后，PyTorch 才能按标准方式管理网络中的参数和子模块
class Net(nn.Module):
    # 构造函数：创建网络层，并定义它们如何组成模型
    def __init__(self):
        # 初始化父类 nn.Module，确保 PyTorch 的模块管理机制正常工作
        super().__init__()
        # 全连接层 1：把每张图片的 784 个像素特征映射到 512 个隐藏特征
        # 28 × 28 = 784；Linear 会学习权重和偏置参数
        self.fc1 = nn.Linear(784, 512)
        # ReLU 激活函数：将负数变为 0，正数保持不变
        # 它为网络加入非线性表达能力
        self.relu = nn.ReLU()
        # 全连接层 2：把 512 个隐藏特征映射为 10 个输出分数，对应数字 0～9
        # 这里输出的是 logits（未经过 Softmax 的类别分数），可直接交给 CrossEntropyLoss
        self.fc2 = nn.Linear(512, 10)
    # forward 定义一次前向传播：输入图片张量，计算并返回模型输出
    # 调用 model(images) 时，PyTorch 会执行这个方法
    def forward(self, x):
        # 将图片展平为二维张量 [batch_size, 784]
        # x.size(0) 是当前 batch 的样本数；-1 也可用于让 PyTorch 推断剩余维度。
        # 例如 [64, 1, 28, 28] 变成 [64, 784]
        x = x.view(x.size(0),784)
        # 通过第一层全连接层，形状从 [batch_size, 784] 变成 [batch_size, 512]
        x = self.fc1(x)
        # 应用 ReLU 激活，张量形状保持 [batch_size, 512] 不变
        x = self.relu(x)
        # 通过输出层，形状从 [batch_size, 512] 变成 [batch_size, 10]
        # 每行的 10 个数分别是该图片属于数字 0～9 的模型分数
        x = self.fc2(x)
        # 返回 logits；训练时用于计算损失，预测时用于选择分数最高的类别
        return x
# 实例化网络，创建一个具体的模型对象。
# 此时网络参数已经创建，但尚未通过训练数据更新。
model = Net()
# 定义交叉熵损失函数。
# 它比较模型输出的 10 类 logits 与真实标签，得到一个衡量预测错误程度的标量 loss。
# nn.CrossEntropyLoss 内部会处理 LogSoftmax 和负对数似然，因此通常不需要手动先做 Softmax
criterion = nn.CrossEntropyLoss()
# 创建 Adam 优化器，负责根据反向传播得到的梯度更新模型参数。
# model.parameters() 提供模型中需要学习的参数；lr=0.001 是学习率。
optimizer = optim.Adam(model.parameters(), lr=0.001)
# 遍历训练集的所有 batch：当前这段循环只遍历一次，因此训练 1 个 epoch
for images, labels in train_loader:
    # 清除上一轮参数梯度的累积值。
    # PyTorch 默认会累积梯度，因此每次反向传播前通常都要清零
    optimizer.zero_grad()
    # 前向传播：把当前 batch 的图片输入模型，得到形状为 [batch_size, 10] 的 logits
    outputs = model(images)
    # 根据模型输出和真实标签计算损失。
    # loss 是当前 batch 的一个标量，反映这一批样本的预测误差
    loss = criterion(outputs, labels)
    # 反向传播：根据 loss 计算各个可训练参数的梯度，并存到参数的 .grad 中
    loss.backward()
    # 优化器根据刚刚计算出的梯度更新模型参数。
    # 到这里，当前 batch 的一次训练更新就完成了。
    optimizer.step()
# 初始化预测正确的样本数
correct = 0
# 初始化参与评估的样本总数
total = 0
# 暂停自动求导，减少评估时的额外计算和内存开销。
# 这里仅表示不计算梯度；它本身不会自动切换模型到 eval 模式
with torch.no_grad():
    # 遍历测试集的所有 batch，用训练后的模型进行预测
    for images, labels in test_loader:
        # 前向传播，得到每张图片对应 10 个类别的 logits
        outputs = model(images)
        # 沿第 1 维（类别维）寻找最大分数。
        # torch.max(outputs, 1) 返回两个结果：最大值和最大值所在的索引。
        # 最大值所在索引就是预测的数字类别 0～9；这里用 _ 忽略最大分数本身。
        _, predicted = torch.max(outputs, 1)
        # 将当前 batch 的样本数累加到测试样本总数中
        total += labels.size(0)
        # predicted == labels 会逐个比较预测标签和真实标签，产生布尔张量。
        # .sum() 统计预测正确的数量；.item() 把只有一个值的 Tensor 转成 Python 数值。
        correct += (predicted == labels).sum().item()
    # 计算准确率 = 正确预测数 / 总样本数 × 100%，并保留两位小数输出。
    # 注意：这里是在整个测试集上统计，而不是只计算最后一个 batch。
    print("准确率: %.2f%%" % (100 * correct / total))

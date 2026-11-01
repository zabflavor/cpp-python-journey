import os

path = r"D:\zab\day41"
inner = os.path.join(path, "student类")

print("1. 这一层里有什么：", os.listdir(path))
print("2. 拼出来的完整路径：", inner)
print("3. 它是文件夹吗：", os.path.isdir(inner))
print("4. 它是文件吗：", os.path.isfile(inner))

#include<iostream>
#include<string>
using namespace std;
//C++的new和delete
//用来动态分配和撤销内存，实现内存的运行时分配。
int main()
{
	//学生成绩管理系统，存储学生成绩。
	//由于学生数量未知，设计数据结构时，如果以数组方式设计
	//要求在编译之前确定数组长度，用已分配内存空间。
	double score[200];
	//无法准确预估使用情况，实际学生数多，造成越界。实际学生数少，内存利用率低。
	//解决方案：通过指针在堆内存中动态申请空间。
	int num;
	cin >> num;
	double* pscore = new double[num];//堆内存中分配num个double空间
	//看看栈空间与堆空间的地址
	cout << "score的地址：" << score << endl << "num 的地址：" << &num << endl
		<< "pscore的地址：" << pscore << endl;
	//pscore指向的堆内存可以以pscore的名义使用，像一个普通数组一样
	//pscore指向的堆空间的初始化或赋值
	for (int i = 0; i < num; i++)
	{
		pscore[i] = i;
	}
	//显示
	for (int i = 0; i < num; i++)
	{
		cout << pscore[i] << endl;
	}
	//与栈不同，堆空间不会被自动撤销，需要手动撤销。
	delete []pscore;
	//如果没有delete，称之谓内存泄漏，程序员基本职业道德。
	//当然可以new一个单独的内存单元
	double* s = new double(5.0);
	delete s;
	//动态内存分配在重要数据结构链表中也有应用，不在赘述。
	return 0;
}
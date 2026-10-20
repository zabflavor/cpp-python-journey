#include<iostream>
using namespace std;
int main() {
	//1、定义指针
	//指针定义的语法：数据类型 * 指针变量名
	//让指针记录变量a的地址
	int a = 10;
	int* p = &a;
	cout << "a的地址为：" << &a << endl;
	cout << "指针p为" << p << endl;

	//2、使用指针
	//可以通过解引用的方式来找到指针指向的内存
	//指针前加 * 代表解引用，找到指针指向内存中的数据
	*p = 100;
	cout << "a=" << a << endl;
	cout << "*p=" << *p << endl;
	return 0;
}
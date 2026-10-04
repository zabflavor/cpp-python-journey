#include<iostream>
using namespace std;
#include"change.h"
//函数的分文件编写
//实现两个数字交换的函数

////函数的声明
//void change(int a, int b);
//函数的定义
/*void change(int a, int b)
{
	int initial = a;
	a = b;
	b = initial;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}*/
//1、创建.h后缀名的文件
//2、创建.cpp后缀名的源文件
//3、在头文件中写函数的声明
//4、在源文件中先函数的定义
int main() {
	int a = 10;
	int b = 30;
	change(a, b);
	system("pause");
	return 0;
}
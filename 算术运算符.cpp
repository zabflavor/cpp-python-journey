#include<iostream>
using namespace std;
int main() {
	//加减乘除运算
	int a1 = 10;
	int b1 = 2;
	cout << a1 + b1 << endl;
	cout << a1 - b1 << endl;
	cout << a1 * b1 << endl;
	cout << a1 / b1 << endl;//两个整数相除，结果依然是整数，将小数部分去除
	       //两个小数可以相除
	double d1 = 0.5;
	double d2 = 0.22;
	cout << d1 / d2 << endl;//运算结果也可以是小数

	//取模（余）运算 本质就是取余数
	int a2 = 10;
	int b2 = 3;
	cout << a2 % b2 << endl;
	       //两个小间不可以做取模运算

	//递增递减运算符
	       //前置递增
	         int a = 10;
	         ++a;//让变量加1
	         cout << "a=" << a << endl;

	       //后置递增
	         int b = 9;
	         b++;//让变量加1
	         cout << "b=" << b << endl;
	       //前置和后置区别
	         //前置递增 先让变量加1 然后进行表达式运算(先加1)
			 int a3 = 10;
			 int b3 = ++a2*10;
			 cout << "a3="<<a3 << endl;
			 cout << "b3="<<b3 << endl;

			 //后置递增 然后进行表达式运算 先让变量加1(后加1)
			 int a4 = 10;
			 int b4 = a3++ * 10;
			 cout << "a4=" <<a4<< endl;
			 cout << "b4=" <<b4<<endl;

	
	system("pause");
	return 0;
}
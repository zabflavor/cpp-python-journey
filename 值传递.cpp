#include<iostream>
using namespace std;
//值传递
//定义函数，实现两个数字进行交换
//如果函数不需要返回值，声明的时候可以写void
void change(int num1, int num2) {
	cout << "交换前：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	int initial = num1;
	num1 = num2;
	num2 = initial;
	cout << "交换后：" << endl;
	cout << "num1=" << num1 << endl;
	cout << "num2=" << num2 << endl;
	//return; 返回值不需要的时候可以不写return
}
int main() {
	int a = 10;
	int b = 39;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	//函数的形参发生传递，不会影响实参
	change(a, b);//是把a，b给了num1,num2。a，b本身没变
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	system("pause");
	return 0;
}
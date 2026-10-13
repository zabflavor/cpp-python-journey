#include<iostream>
using namespace std;
//函数的重载
//函数名相同，提高复用性

//函数重载的条件
//1、在同一个作用域下
//2、函数名称相同
//3、函数参数类型不同，或者数量不同，或者顺序不同
void func() {
	cout << "this is func1" << endl;
}
void func(int a) {
	cout << "this is func2" << endl;
}
void func(double b) {
	cout << "this is func3" << endl;
}
void func(int a,double b) {
	cout << "this is func4" << endl;
}
void func(double b,int a) {
	cout << "this is func5" << endl;
}


//函数重载的注意事项
//1、引用作为重载的条件
void fun(int& a) {                              //int &a=10 不合法
	cout << "fun(int &a)的调用" << endl;
}
void fun(const int& a) {                        //const int &a=10 合法
	cout << "fun(const int &a)的调用" << endl;
}
//2、函数重载碰到默认参数
void fun2(int a,int b=10) {                              
	cout << "fun2(int a,int b=10)的调用" << endl;
}
void fun2(int a) {                       
	cout << "fun2(int a)的调用" << endl;
}
int main() {
	func();
	func(10);
	func(3.14);
	func(10,3.14);
	func(3.14,10);
	int a = 10;
	fun(a);
	fun(10);
	//fun2(10);  这个会使函数重载碰到默认参数的时候，出现二义性，报错，尽量避免
	fun2(10,10);
	system("pause");
	return 0;
}
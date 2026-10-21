#include<iostream>
using namespace std;
//1、值传递（形参不修饰实参）
void func1(int a, int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a="<<a<<endl;
	cout<<"b=" << b << endl;
}
//2、地址传递（形参修饰实参）
void func2(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int a = 10;
	int b = 20;
	func1(a, b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	func2(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	return 0;
}
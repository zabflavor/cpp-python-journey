#include<iostream>
using namespace std;
//引用做函数值的返回
//1、不要返回局部变量的引用
int& func() {
	int a = 10;//局部变量存放在四区中的 栈去
	return a;
}
//2、函数的调用可以作为左值（可以作为等号的左边存在，继续调用）
int& test() {
	static int a = 30;//静态变量，存放在全局区，全局区上的变量在程序运行结束后释放
	return a;
}
//常量引用
//使用场景：用来修饰形参，防止误操作
//int a=10;
//int &ref=10;就是错误的
//加上const之后 编译器将代码修改为 int temp=10;const int&ref=temp;
void showvalue(const int& val) {
	//val = 1000;加了const之后就不能在这个里面修改了
	cout << "val=" << val<< endl;
}
const int& ref = 10;
int main() {
	int& ref = func();
	cout << "ref=" << ref << endl;//变量已经被释放了
	cout << "ref=" << ref << endl;
	int& ref2 = test();
	cout << "ref2=" << ref2 << endl;
	test() = 1000; //返回的是a，所以相当于内存已经被修饰了，整个内容只是原名和别名在不断换着出现而已
	cout << "ref2=" << ref2 << endl;
	system("pause");
	return 0;
}
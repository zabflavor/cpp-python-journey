#include<iostream>
using namespace std;
//函数默认参数

//如果我们自己传入数据，就用自己的数据，如果没有，那么就用默认值
//语法：返回值类型 类型名（形参=默认参）{}
int func(int a = 10, int b = 30, int c = 40) {
	return a + b + c;
}
//1、如果某个位置参数有默认值，那么从这个位置往后，从左到右，必须要有默认值
//int func(int a = 10, int b = 30, int c) {
//	return a + b + c;
//}

//2、如果声明和实现只能有一个有默认参数
int main() {
	cout<<func()<<endl;
	system("pause");
	return 0;
}
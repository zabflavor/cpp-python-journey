#include<iostream>
using namespace std;
//函数的占位参数
//返回值类型 函数名（数据类型）{}
//占位参数可以有默认参数
void func(int a, int =10) {         //void是指该函数不返回任何值
	cout << "this is func" << endl;
}
int main() {
	func(10, 10);
	system("pause");
	return 0;
}

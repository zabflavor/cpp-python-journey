#include<iostream>
using namespace std;
int main() {
	//可以利用sizeof求出数据类型占用的内存大小
	//语法：sizeof（数据类型or变量）
	int a = 100;
	cout << "int类型占用的存储空间为" << sizeof(int) << endl;
	system("pause");
	return 0;

}
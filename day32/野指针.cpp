#include<iostream>
using namespace std;
int main() {
	//野指针：指针指向非法内存
	//指针变量p指向编号为0x1100的空间
	int* p = (int*)0x1100;
	//访问野指针报错
	//程序中要尽量避免野指针的出现
	cout << *p << endl;
	return 0;
}
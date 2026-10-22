#include<iostream>
using namespace std;
int main() {
	//空指针
	//1、空指针用于给指针变量进行初始化(相当于其存的内存地址为0)
	int* p = nullptr;
	//2、空指针是不可以被访问的
	//0~255之间的内存编号，是被系统占用的，因此不可以被访问
	//*p = 100;(错误)

	//三行实验
	int* q = nullptr;
	cout << q;//打出一串0是因为q的地址就是0
	int a = 99;
	int* j = &a;
	if (j!= nullptr) {
		cout << *j << endl;
	}
	else {
		cout << "指针是空的，不能打印";
	}
	return 0;
}
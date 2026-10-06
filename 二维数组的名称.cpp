#include<iostream>
using namespace std;
int main() {
	//二维数组名称用途
	//1、可以查看占用内存的空间大小
	int arr[2][3] = {
		{3,5,6},
		{7,3,8}
	};
	cout << "二维数组占用的内存空间为：" << sizeof(arr) << endl;
	cout << "二维数组第一行占用的内存为：" << sizeof(arr[0]) << endl;
	cout << "二维数组第一个元素占用的内存为" << sizeof(arr[0][0]) << endl;
	cout << "二维数组的行数为" << sizeof(arr) / sizeof(arr[0]) << endl;
	//2、可以查看二维数组的首地址
	cout << "二维数组的首地址为：" << (int)arr << endl;
	cout << "二维数组第一行数据的首地址为：" << (int)arr[0] << endl;
	cout << "二维数组第二行数据的首地址为：" << (int)arr[1] << endl;
	cout << "二维数组第一个元素的首地址为：" << (int)&arr[0][0] << endl;//一个数的地址要加&
	system("pause");
	return 0;
}
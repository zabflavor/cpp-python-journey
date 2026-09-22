/*常量：记录不可更改的数据
1，#define 宏常量
2，const修饰的变量*/
//1，#define 
#include<iostream>
using namespace std;
#define Day 7

int main() {

	cout <<"一周共有" << Day << "天" << endl;

	/*const修饰的变量*/
	const int month = 12;
	//month=24;//错误，connst修饰的变量也成为常量
	cout << "一年总共有" << month << "个月份" << endl;


	system("pause");

	return 0;
}

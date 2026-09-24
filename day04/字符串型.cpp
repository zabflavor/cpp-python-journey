#include<iostream>
using namespace std;
#include<string>    //用C++风格的字符串时，要包含这个头文件
int main() {
	//字符串型：表示一串字符(相当于给字符串取个代号)
	//char 变量名[] ="字符串值"
	//C语言风格字符串
	//加中括号 用双引号包字符串
	char str[] = "hello world";
	cout << str << endl;
	//C++风格字符串
	//包含头文件
	string str2 = "hello zab";
	cout << str2 << endl;
	system("pause");
	return 0;

}

//字符型：表示单个字符    char ch='';(常见错误：用单引号，单引号里面只有一个字符) 字符型变量只占一个字节
//字符型变量并不是把字符本身放到内存中存储，而是将对应的ASCII编码放到存储的单位

#include<iostream>
using namespace std;
int main() {
	char ch = 'a';
	cout << ch << endl;
	//字符型变量对应的ACSII编码
	cout << (int)ch << endl;
	//a-97 A-65

	system("pause");
	return 0;


}
#include<iostream>
using namespace std;
int main() {
	//逻辑运算符 非 ！
	int a = 10;
	         //只要不是零就是真，非真就是假
	           cout << !a << endl;
	           cout << !!a << endl;
	           //总结：真变假，假变真
	//逻辑运算符 与 &&    两个都为真，才为真
			   int b = 10;
			   int c = 10;
			   cout << (c && b) << endl;
			   //同真为真，其余为假
	//逻辑运算符 或 ||
			   int d = 0;
			   int e = 10;
			   cout << (d || e) << endl;
			   //同假为假，同真为真


	system("pause");
	return 0;
}
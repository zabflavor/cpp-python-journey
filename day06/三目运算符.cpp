#include<iostream>
using namespace std;
int main() {
	//三目运算符                  
	//                                             表达式1？表达式2：表达式3
	//                                             如果表达式1的值为真，执行表达式2，并返回表达式2的结果
	//                                             如果表达式1的值为假，执行表达式3，并返回表达式3的结果
	//创建三个变量 a b c
	//将a和b作比较，将变量大的值赋值给变量c
	int a = 10;
	int b = 30;
	int c = 0;
	c = (a > b ? a : b);
	cout << "c=" << c << endl;
	//三目运算符返回的是变量，可以继续赋值
	(a > b ? a : b)=1000;
	cout << "b=" << b << endl;
	cout << "a=" << a << endl;
	system("pause");
	return 0;
}

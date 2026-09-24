#include<iostream>
using namespace std;
int main() {
	//赋值运算符
	//=
	int a = 10;
	a = 100;//(赋值把前面的a=10覆盖掉了)
	cout << "a=" << a << endl;
	//+=
	a = 22;
	a += 2;//a=a+2;
	cout << "a=" << a << endl;
	//-=
	a = 10;
	a -= 2;//a=a-2;
	cout << "a=" << a << endl; 
	//*=
	a = 34;
	a *= 2;//a=a*2;
	cout << "a=" << a << endl;
	// /=
	a = 24;
	a /= 2;//a=a/2;
	cout << "a=" << a << endl;
	//%=
	a = 8;
	a %= 3;//a=a%3;
	cout << "a=" << a << endl;
	system("pause");
	return 0;
}
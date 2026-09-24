#include<iostream>
using namespace std;
int main() {
	//比较运算符
	//==
	int a = 10;
	int b = 3;
	cout << (a == b) << endl;//(小括号是为了让系统优先输出运算而不是换行的指令）
    //!=

	cout << (a != b) << endl;
	//>
	
	cout << (a > b) << endl;
	//<
	
	cout << (a < b) << endl;
	//>=
	
	cout << (a >= b) << endl;
	//<=
	
	cout << (a <= b) << endl;
	system("pause");
	return 0;
}

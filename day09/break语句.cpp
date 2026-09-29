#include<iostream>
using namespace std;
int main() {
	//break语句
	//出现在switch语句中，作用是终止case并跳出switch
	cout << "请选择副本难度" << endl;
	cout << "1、普通" << endl;
	cout << "2、中等" << endl;
	cout << "3、困难" << endl;
	int select = 0;//创建用户的选择
	cin >> select;
	//不加break的话会在执行完case1后继续执行2，3
	switch (select) {
	case 1:
		cout << "您选择的是普通难度" << endl;
		break;
	case 2:
		cout << "您选择的是中等难度" << endl;
		break;
	case 3:
		cout << "您选择的是困难难度" << endl;
		break;
	default:
		break;
	}
	//出现在循环语句中，作用是跳出当前的循环语句
	for (int i = 1; i <= 10; i++) {
		//如果i等于5，退出循环
		if (i == 5) {
			break;
		}
		cout << i << endl;
	}
	//出现在嵌套循环中，就是跳出最近的内层循环语句
	for (int a = 0; a < 10; a++) {
		for (int i = 0; i < 10; i++) {
			if (i == 5) {
				break;
			}
			cout << "* " ;
		}
		cout << endl;
	}




	system("pause");
	return 0;
}

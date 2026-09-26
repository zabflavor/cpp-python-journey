#include<iostream>
using namespace std;
int main() {
	//1、先判断A和B谁重，再让那个跟C比较

	int a = 0;
	int b = 0;
	int c = 0;
	//2、让用户输入三只小猪重量
	cout << "请输入小猪A的重量" << endl;
	cin >> a;
	cout << "请输入小猪B的重量" << endl;
	cin >> b;
	cout << "请输入小猪C的重量" << endl;
	cin >> c;
	cout << "小猪A的重量为：" << a << endl;
	cout << "小猪B的重量为：" << b << endl;
	cout << "小猪C的重量为：" << c << endl;
	//3、判断那只最重
	  //先判断A和B的重量
	if (a > b) {
		if (a > c) {
			cout << "小猪A最重，他的体重为" << a << endl;

		}
		else if (c > a) {
			cout << "小猪C最重，他的体重为" << c << endl;
		}
		else {
			cout << "小猪A和C都是最终的，他们的体重均为" << c << endl;
		}
	}
	else if (a < b) {
		if (b > c) {
			cout << "小猪B最重，他的体重为" << b << endl;

		}
		else if (c > b) {
			cout << "小猪C最重，他的体重为" << c << endl;
		}
		else {
			cout << "小猪B和C都是最重的，他们的体重均为" << c << endl;
		}
	}
	else {
		if (a > c) {
			cout << "小猪A和B都是最重的，他们的体重均为" << a << endl;
		}
		else if (a < c) {
			cout << "小猪C是最重的，他的体重为" << c << endl;

		}
	}
	system("pause");
	return 0;

}

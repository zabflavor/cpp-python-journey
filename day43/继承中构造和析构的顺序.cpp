#include<iostream>
using namespace std;
class base {
public:
	base() {
		cout << "base的构造函数" << endl;
	}
	~base() {
		cout << "base的析构函数" << endl;
	}
};
class son :public base {
public:
	son() {
		cout << "son的构造函数" << endl;
	}
	~son() {
		cout << "son的析构函数" << endl;
	}
};
int main() {
	base b;
	son s;   //继承中的构造和析构顺序如下：
	         //先构造父类，再构造子类，析构的顺序和构造的顺序相反
	return 0;
}
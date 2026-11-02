#include<iostream>
using namespace std;
//继承实现
class basepage {
public:
	void fun1() {
		cout << "step1" << endl;
	}
	void fun2() {
		cout << "step2" << endl;
	}
	void fun3() {
		cout << "step3" << endl;
	}
};
//java页面
class java :public basepage {
public:
	void content() {
		cout << "java" << endl;
	}
};
//python页面
class python :public basepage {
public:
	void content() {
		cout << "python" << endl;
	}
};
void test01() {
	cout << "java" << endl;
	java j;
	j.fun1();
	j.fun2();
	j.fun3();
	j.content();
	cout << "python" << endl;
	python p;
	p.fun1();
	p.fun2();
	p.fun3();
	p.content();
}
//继承的好处：减少重复代码
//语法：class 子类：继承方式 父类
//子类 也称为 派生类
//父类 也称为 基类
int main() {
	test01();
	return 0;
}
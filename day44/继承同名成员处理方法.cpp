#include<iostream>
using namespace std;
//继承中同名成员处理方式
class Base {
public:
	Base() {
		m_a = 100;
	}
	void func() {
		cout << "base func（）调用" << endl;
	}
	void func(int a) {
		cout << "a= " << a << endl;
	}
	int m_a;
};
class Son :public Base {
public:
	Son() {
		m_a = 200;
	}
	void func() {
		cout << "son func（）调用" << endl;
	}
	int m_a;
};
//同名成员属性处理
void test01() {
	Son s;
	cout << "Son m_a= " << s.m_a << endl;
	//如果通过子类对象 访问到父类中同名成员，需要加作用域
	cout << "Base m_a= " << s.Base::m_a << endl;
}
//同名成员函数处理
void test02() {
	Son s;
	s.func(); //直接调用是调用子类中的同名成员
	//如何调用到父类中同名成员函数？
	s.Base::func();
	//如果子类中出现和父类同名的成员函数，子类的同名成员会隐藏掉父类中所有同名成员函数（如无参构造和有参构造）
	// 如果想访问到父类中被隐藏的同名成员函数，需要加作用域
	s.Base::func(100);
}
int main() {
	test01();
	test02();
	return 0;
}
#include<iostream>
using namespace std;
//成员变量和成员函数是分开存储的
class person {
	int m_a;//非静态成员变量  属于类的对象上的
	static int m_b;//静态成员变量（其必须初始化）类的对象上
	void func(){}//非静态成员函数 不属于类的对象上
	static void func2(){}//静态成员函数 不属于类的对象上
};
int person::m_b = 0;
void test01() {
	person p;
	//空对象占用的空间内存为1
	//c++编译器也会给每一个空对象分配一个字节空间，是为了区分空对象占内存的空间
	//每个空对象也应该有一个独一无二的内存空间
	cout<<"size of p = "<<sizeof(p)<<endl;
}
int main() {
	test01();
	return 0;
}
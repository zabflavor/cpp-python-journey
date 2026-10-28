#include<iostream>
using namespace std;
//构造函数的分类及其调用
//分类
//	按照参数分类	有参构造和无参构造(默认构造)
//	按照类型分类	普通构造和拷贝构造
class person {
	//构造函数
public:
	person() {
		cout<<"person无参构造函数的调用" << endl;
	}
	person(int a) {
		age = a;
		cout << "person有参构造函数的调用" << endl;
	}
	//拷贝函数
	person(const person& p) {
		//将传入的人身上的所有属性，拷贝到我身上
		age = p.age;
		cout << "person拷贝造函数的调用" << endl;
	}
	int age;
};
//调用
void test01() {
	//1、括号法
	person p1;//默认构造函数调用
	person p2(10);//有参构造函数
	person p3(p2);//拷贝构造函数调用
	  //注意事项：调用默认构造函数的时候，不要加（） 因为 person p1（）会当作函数的声明，不会认为在创建对象
	cout<<"p2的年龄为："<<p2.age<<endl;
	cout << "p3的年龄为：" << p3.age << endl;
	//2、显示法
	person p1;
	person p2 = person(10);//有参构造
	person p3 = person(p2);//拷贝构造
	  //person（10）是匿名对象，当当前执行结束后，系统会立即回收掉匿名对象
	  // 不要用拷贝构造函数初始化匿名对象 编译器会认为 person(p3)===person p3; 对象声明
	//3、隐式转换法
	person p4 = 10;//相当于写了 person p4=person(10);  有参构造
	person p5 = p4;//有参构造
}
int main() {
	test01();  //()是函数调用符号！！！
	return 0;
}
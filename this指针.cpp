#include<iostream>
using namespace std;
class person {
public:
	person(int age) {
		//this指针指向的是被调用的成员函数所属对象 p1在调用这个有参构造就指向p1
		this->age = age;
	};
	person& personaddperson(person& p) {  //用值的方式返回，会不断创造新的对象
		this->age += p.age;
		//this是指向p3的指针，而*this是指向p3这个对象本体
		return *this;
	}
	int age; //一般用m_Age避免冲突
};
//1、解决名称冲突
void test01() {
	person p1(18);
	cout<<"p1的年龄为： "<<p1.age<<endl;

}
//2、返回对象本身用*this
void test02() {
	person p2(10);
	person p3(10);
	//链式编程思想
	p3.personaddperson(p2).personaddperson(p2).personaddperson(p2);//第一个函数返回完只有返回的是P3本身才可以继续加
	cout<<"p3年龄为： "<<p3.age<<endl;
}

int main() {
	test01();
	test02();
	return 0;
}
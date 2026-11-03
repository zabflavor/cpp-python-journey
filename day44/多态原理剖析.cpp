#include<iostream>
using namespace std;
//多态
//动物类
class Animal {
public:
	//虚函数
	void speak() {
		cout << "动物在说话" << endl;
	}
	virtual ~Animal() {
		cout << "Animal的析构函数" << endl;
	}
};
//猫类
class Cat :public Animal {
public:
	void speak() {//这里void前面的virtual可写可不写
		cout << "小猫在说话" << endl;
	}
	~Cat() {
		cout << "cat的析构函数" << endl;
	}
};
//狗类
class Dog :public Animal {
public:
	void speak() {
		cout << "小狗在说话" << endl;
	}
};
//执行说话的函数
//地址早绑定，在编译的时候就确定了函数地址
//如果想执行让猫说话，那么这个函数不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
void doSpeak(Animal&animal) { //Animal&animal=cat；
	animal.speak();
}
//动态多态满足条件
//1、有继承关系
//2、子类重写父类的虚函数         重写：函数返回值类型 函数名 参数列表 完全相同

//动态多态使用
//父类的指针或引用 指向子类的对象
int main() {
	Animal* p = new Cat;
	p->speak();
	delete p;
	return 0;
}
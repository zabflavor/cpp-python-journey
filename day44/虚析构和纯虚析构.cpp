#include<iostream>
#include<string>
using namespace std;
//虚析构和纯虚析构
class Animal {
public:
	//纯虚函数
	virtual void speak() = 0;
	//纯虚析构 需要声明也需要实现
	virtual~Animal() = 0;
	Animal() {
		cout << "Animal的构造函数的调用" << endl;
	}
	//利用虚析构可以解决 父类指针释放子类对象时不干净的问题
	//有了纯虚析构后，这个类也属于抽象类，无法实体化对象
	//虚析构
	virtual ~Animal() {
		cout << "Animal的析构函数的调用" << endl;
	}
};
Animal::~Animal() {
	cout << "Animal纯虚析构的调用" << endl;
}
class Cat :public Animal {//如果子类中没有堆区数据，可以不写虚析构或纯虚析构
public:
	Cat(string name) {
		cout << "Cat构造函数调用" << endl;
		m_Name=new string(name);
	}
	void speak() {
		cout << *m_Name<<"小猫在说话" << endl;
	}
	~Cat() {
		if (m_Name != nullptr) {
			cout << "Cat析构函数调用" << endl;
			delete m_Name;
			m_Name = nullptr;
		}
	}
	string* m_Name;
};
void test01() {
	Animal* animal = new Cat("Tom");
	animal->speak();
	//父类指针在析构的时候 不会调用子类中析构函数，导致子类如果有堆区属性，出现内存泄漏
	delete animal;
}
int main() {
	test01();
	return 0;
}
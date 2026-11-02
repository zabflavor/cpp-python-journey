#include<iostream>
using namespace std;
class base {
public:
	int m_a;
protected:
	int m_b;
private:
	int m_c;
};
class son :public base {
public:
	int m_d;
};
void test01() {
	cout << "size of son= " << sizeof(son) << endl;
}
//父类中所有非静态成员属性都会被子类继承下去
//父类中私有成员属性 是被编译器给隐藏了，因此是访问不到，但确实是继承下去了
int main() {
	test01();
	return 0;
}
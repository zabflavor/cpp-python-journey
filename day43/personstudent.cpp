#include<iostream>
using namespace std;
class person {
protected:
	int m_num1=0;
	int m_num2;
public:
	person() {
		cout << "perosn的构造函数" << endl;
	}
	~person() {
		cout << "person的析构函数" << endl;
	}
};
class student :public person {
public:
	int m_num3;
	student() {
		cout << "student的构造函数" << endl;
	}
	void function() {
		cout << "m_num1= " << m_num1 << endl;
	}
	~student() {
		cout<<"student的析构函数" << endl;
	}
};
int main() {
	student s;
	//s.m_num1 = 20;
	s.function();
	cout << sizeof(student) << endl;
	return 0;
}

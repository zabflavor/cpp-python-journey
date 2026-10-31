#include<iostream>
using namespace std;
class Student {
	int m_score1;
	int m_score2;
	int m_score3;
public:
	Student() {
		m_score1 = 0;
		m_score2 = 0;
		m_score3 = 0;
		cout << "无参构造函数的调用" << endl;
	}
	Student(int a,int b,int c) {
		m_score1 = a;
		m_score2 = b;
		m_score3 = c;
		cout << "有参构造函数的调用" << endl;
	}
	Student(const Student&p) {
		m_score1 = p.m_score1;
		m_score2 = p.m_score2;
		m_score3 = p.m_score3;
		cout << "拷贝构造函数的调用" << endl;
	}
	~Student() {
		cout << "析构函数的调用" << endl;
	}
	int getscore1() {
		return m_score1;
	}
	int getscore2() {
		return m_score2;
	}
	int getscore3() {
		return m_score3;
	}
	void setscore1(int score1) {
		if (score1 < 0 || score1 > 100) return;
		m_score1 = score1;
	}
	void setscore2(int score2) {
		if (score2 <= 100 && score2 >= 0) {
			m_score2 = score2;
		}
	}
	void setscore3(int score3) {
		if (score3 <= 100 && score3 >= 0) {
			m_score3 = score3;
		}
	}
};
int main() {
	Student s1(85,57,88);
	cout << s1.getscore1() << endl;
	Student s2 (88, 84, 99);
	Student s3 = s2;
	cout << s3.getscore2()<<endl;
	Student* p = new Student(70, 80, 90);
	Student s;
	cout << s.getscore1() << endl;
	delete p;
	cout << sizeof(Student) << endl;
	s1.setscore1(150);
	cout << s1.getscore1() << endl;
	s1.setscore1(0);
	cout << s1.getscore1()<<endl;
	return 0;
}

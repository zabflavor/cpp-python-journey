#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<string>
using namespace std;
//成员属性设置为私有
//1、可以自己控制读写权限
//2、对于写可以检测数据有效性

//人类
class person {
public:
	//设置姓名
	void setname(string name) {
		m_Name = name;
	}
	//获取姓名
	string getname() {
		return m_Name;
	}

	//获取年龄
	int getage() {
		return m_age;
	}
	//设置年龄（0~150）
	void setage(int age) {
		if (age < 0 || age>150) {
			cout << "抱歉，您年龄输入有误" << endl;
			return;
		}
		m_age = age;
	}
	//设置偶像
	void setidol(string idol) {
		m_Idol = idol;
	}
private:
	string m_Name; //姓名 可读可写
	int m_age=18;  //年龄 只读    也可以写（必须在0到150之间）
	string m_Idol;  //偶像 只写
};
int main() {
	person p;
	//姓名设置
	p.setname("zab");
	cout<<"姓名："<<p.getname()<<endl;
	//年龄设置  年龄设置不了,只能获取
	p.setage(89);
	cout<<"年龄：" <<p.getage()<< endl;
	//偶像设置
	p.setidol("小明");
	return 0;
}

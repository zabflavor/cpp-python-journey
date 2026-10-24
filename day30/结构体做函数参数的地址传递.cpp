#include<iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int age;
	int score;
};
void printstudent2(struct student* p) {
	cout << "子函数2中 姓名：" << p->name << "年龄：" << p->age << "分数：" << p->score << endl;
}
int main() {
	struct student s1;
	s1.name = "zab";
	s1.age = 18;
	s1.score = 100;
	printstudent2(&s1);
	return 0;
}
//值传递形参不修饰实参
//地址传递形参修饰实参

#include<iostream>
#include<string>
using namespace std;
struct Student {
	string name;
	int age;
	int score;
};
void studentarrange(struct Student s) {
	cout << "姓名：" << s.name << "  年龄：" << s.age << "  分数：" << s.score << endl;
}
int main() {
	struct Student s1 = { "张三",18,100 };
	studentarrange(s1);
	return 0;
}
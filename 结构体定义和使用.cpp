#include<iostream>
#include<string>
using namespace std;
//1、创建学生数据类型：学生包括（姓名，年龄，分数）
struct Student {//这里的struct不能去掉
	//姓名
	string name;
	//年龄
	int age;
	//成绩
	int score;
}s3;//在定义结构体变量时顺便创建结构体变量
int main() {
//2、通过学生类型创建具体学生
	//2.1 struct Student s1;
	struct Student s1;//这里的struct可以去掉
	  //给s1属性赋值，通过.来访问结构体变量中的属性
	s1.name = "张三";
	s1.age = 18;
	s1.score = 100;
	cout << "姓名为" << s1.name << "  年龄为" << s1.age << "  分数为" << s1.score << endl;
	//2.2 struct Student s2={...}
	Student s2 = { "李四",19,80 };
	cout << "姓名为" << s2.name << "  年龄为" << s2.age << "  分数为" << s2.score << endl;
	//2.3 在定义结构体变量时顺便创建结构体变量
	s3.name = "王五";
	s3.age = 19;
	s3.score = 60;
	cout << "姓名为" << s3.name << "  年龄为" << s3.age << "  分数为" << s3.score << endl;

}
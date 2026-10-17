#include<iostream>
#include<string>
using namespace std;
//结构体数组
//1、定义结构体
struct Student {
	//姓名
	string name;
	//年龄
	int age;
	//成绩
	int score;
};
int main() {
//2、创建结构体数组
	struct Student stuarray[3] = {
		{"张三",18,100},
		{"李四",19,90},
		{"王五",20,99}};
//3、给结构体数组中的元素赋值
	stuarray[2].name = "赵六";
	stuarray[2].age = 22;
	stuarray[2].score = 98;
	//数组的内容是可修改的
//4、遍历结构体数组
	for (int i = 0; i < 3; i++) {
		cout << "姓名:" << stuarray[i].name << "   年龄:" << stuarray[i].age << "    分数:" << stuarray[i].score << endl;
	};


}

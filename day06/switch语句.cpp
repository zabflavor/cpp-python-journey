#include<iostream>
using namespace std;
int main() {
	//语法结构
	// switch(表达式){
	// case 结果1：执行语句;break;
	// case 结果2：执行语句;break;
	// ......
	// default:执行语句;break;
	// }
	



	//给电影打分 10~9 经典 8~7 非常好 6~5 一般 5以下 烂片
	//1、提示用户给电影打分
	cout << "请您给这部电影打分" << endl;
	//2、用户开始进行打分
	int score = 0;
	cin >> score;
	cout << "您打的分数为："<<score << endl;
	//3、根据用户输入的分数来提示用户最后的结果
	switch (score) {
	case 10:
		cout << "您认为是经典电影" << endl;
		break;//退出当前分支
	case 9:
		cout << "您认为是经典电影" << endl;
		break;
	case 8:
		cout << "您认为是非常好的电影" << endl;
		break;
	case 7:
		cout << "您认为是非常好的电影" << endl;
		break;
	case 6:
		cout << "您认为是一般电影" << endl;
		break;
	case 5:
		cout << "您认为是一般电影" << endl;
		break;
	default://前面几个都不满足时，执行这个
		cout << "您认为这是烂片" << endl;
		break;
	}
}

//if和switch的区别？
//switch缺点：后面的括号只能放一个整数或者字符型，不可是一个区间（判断的时候）
//switch优点：结构清晰，执行效率高

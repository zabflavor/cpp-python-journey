#include<iostream>
using namespace std;
int main() {
	//就是数字炸弹游戏
	//1、系统生成随机数
	//添加随机数种子利用当前系统时间生成随机数，防止每次随机数是一样的
	srand((unsigned int)time(NULL));
	int num = rand() % 100+1;//rand()%100生成0~99随机数   不要直接写101，不然生成的是0~100而不是1~100
	//2、玩家进行猜测
	int val = 0;//玩家输入的数据
	while (1) {//1不是代表你猜对了，而是指条件永远为真，把它变为一个死循环，循环停止靠else里面的break
		cin >> val;
		//3、判断玩家的猜测
		//猜对 退出游戏            猜错 提示猜的结果过大或过小 重新返回第2步
		if (val > num) {
			cout << "你猜测的数字过大" << endl;
		}
		else if (val < num) {
			cout << "你猜的数字过小" << endl;
		}
		else{
			cout << "恭喜您猜对了" << endl;
			break;//利用其退出当前循环
		}
		
	}
	
	
	system("pause");
	return 0;
}
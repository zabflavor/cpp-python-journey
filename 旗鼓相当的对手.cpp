#include<iostream>
#include<cmath>
using namespace std;
int main() {
	//获取成绩表
	int n=0;              //一口气定义多个变量，定义的时候也不一定非要初始值
	//写1010是因为n小于1000，数据范围是max+5~10
	int sum = 0;
	int grade[1010][5] = { 0 };//行数1010是定义了数组的大小，填数组的最大值，但我们输入n的时候是定义了我们只用几组
	cin >> n;//行数不能直接写n，行数要是一个常量
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 3; j++) {
			cin >> grade[i][j];   //输入数组的数据时，要有i j不要在括号里直接打入行数和列数
			grade[i][4] += grade[i][j];//求和
		}
	}
	for (int i = 1; i <= n; i++) {
		for (int j = i+1; j <= n; j++) {//i+1避免了重复计数的问题
			if (abs(grade[i][1] - grade[j][1]) <= 5 && abs(grade[i][2] - grade[j][2]) <= 5 && abs(grade[i][3] - grade[j][3]) <= 5 && abs(grade[i][4] - grade[j][4]) <= 10)
			{//&&是和的字符，要全部为真才为真
				sum++;
			}
		}
	}
	cout << sum << endl;
	system("pause");
	return 0;
}
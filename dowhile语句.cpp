#include<iostream>
using namespace std;
int main() {
	//do{循环语句}while(循环条件);
	//与while的区别在于do...while会先执行一次循环语句，再判断循环条件
	//在屏幕中输出0~9这九个数字
	int num = 0;
	do {//先执行再判断条件
		cout << num << endl;
		num++;
	} while (num < 10);
		system("pause");
	return 0;
}
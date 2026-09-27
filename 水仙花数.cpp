#include<iostream>
using namespace std;
int main() {
	//1、将所有的三位数进行输出
	int num = 100;
	do {//2、从所有的三位数中，获取水仙花数
	  //获取个位  153%10=3  对数字取模于10 可以获取到个位
	  //获取十位  153/10=15 15%10=5 先整除于10，得到两位数，再取模于10，得到个位
	  //获取百位  153/100=1 直接整除于100，获取百位
		int a = 0;//个位
		int b = 0;//十位
		int c = 0;//百位
		a = num % 10;
		b = (num / 10) % 10;
		c = num / 100;
		if ( a*a*a+ b*b*b + c*c*c ==num) {
			cout << num << endl;
		}

	
		num++;
	} while (num < 1000);
	
	system("pause");
	return 0;

}
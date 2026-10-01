#include<iostream>
using namespace std;
int main() {
	double mile = 0;//不要用int 会抹掉小数
	cin >> mile;
	double sum = 0;
	int i = 0;
	for (double a = (double)2; sum < mile;) {//用double命名a
	    sum +=a;
		a = a * 0.98;
		i++;
	}
	cout << i;
}
#include<iostream>
using namespace std;
int main() {
	int a,sum = 0;
	cin >> a;
	while (a > 1) {
		a = a / 2;
		sum++;
	}
	cout << sum+1<< endl;
}
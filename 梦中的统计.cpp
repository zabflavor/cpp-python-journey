#include<iostream>
using namespace std;
int main() {
	int m, n;
	cin >> m >> n;
	int num[10] = { 0 };
	for (int i = m; i <= n; i++) {
		int x = i;
		while (x > 0) {
			int d = x % 10;
			num[d]++;//千万不要写成d-1 是对好了的 因为第一个数字是输出0的数码个数
			x = x / 10;
		}
	}
	for (int a = 0; a < 10; a++) {
		cout << num[a] << " " ;
	}
	system("pause");
	return 0;
}
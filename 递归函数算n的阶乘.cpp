#include<iostream>
using namespace std;
long long fact(int n) {
	if (n == 0) {
		return 1;
	}
	else {
		return fact(n - 1) * n;
	}
}
int main() {
	int n;
	cin >> n;
	cout << fact(n) << endl;
	return 0;
}
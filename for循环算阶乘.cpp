#include<iostream>
using namespace std;
int main() {
	int n;
	long long result = 1;
	cin >> n;
	if (n == 0) {
		result = 1;
	}
	else {
		for (int i = 1; i <= n; i++) {
			result = result * i;
		}
	}
	cout << result << endl;
	return 0;
}
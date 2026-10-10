#include<iostream>
using namespace std;
int main() {
	int n = 0;
	int sum = 0;
	int numbers[105] = { 0 };
	int result[1005] = { 0 };
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	for (int j = 0; j < n; j++) {
		result[numbers[j]] =1;
	}
	for (int k = 0; k < 1005; k++) {
		if (result[k] ==1) {
			sum++;
		}
	}
	cout << sum << endl;
	for (int j = 0; j < 1005; j++) {
		if (result[j] == 1) {
			cout <<j<<" ";
		}
	}
    system("pause");
	return 0;
}
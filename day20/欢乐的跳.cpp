#include<iostream>
using namespace std;
int main() {
	int n = 0;
	int sum = 0;
	cin >> n;
	long long numbers[1005] = { 0 };
	long long result[1005] = { 0 };
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
	for (int j = 0; j < n - 1; j++) {
		if (numbers[j] == numbers[j + 1]) {
			long long result[1005] = { 0 };
		}
		else if (abs(numbers[j] - numbers[j + 1]) >= n) {
			long long result[1005] = { 0 };
		}
		else {
			if (numbers[j] > numbers[j + 1]) {
				result[numbers[j] - numbers[j + 1]] = 1;
			}
			if (numbers[j] < numbers[j + 1]) {
				result[numbers[j + 1] - numbers[j]] = 1;
			}

		}
	}
		for (int k = 0; k < n; k++) {
			if (result[k] == 1) {
				sum++;
			}
		}

		if (sum == n - 1) {
			cout << "Jolly" << endl;
		}
		else {
			cout << "Not jolly" << endl;
		}

        system("pause");
		return 0;
	}

#include<iostream>
using namespace std;
void readarry(int n,int numbers[]) {
	for (int i = 0; i < n; i++) {
		cin >> numbers[i];
	}
}
void markseen(int n, int numbers[], int result[]) {
	for (int j = 0; j < n; j++) {
		result[numbers[j]] = 1;
	}
}
int coutseen(int result[]) {
	int sum = 0;
	for (int k = 0; k < 1005; k++) {
		if (result[k] == 1) {
			sum++;
		}
	}
	return sum;
}
void printseen(int result[]) {
	for (int j = 0; j < 1005; j++) {
		if (result[j] == 1) {
			cout << j << " ";
		}
	}
}
int main() {
	int n = 0;
	cin >> n;
	int numbers[105] = { 0 };
	int result[1005] = { 0 };
	readarry(n, numbers);
	markseen(n,numbers,result);
	int sum = coutseen(result);
	cout << sum << endl;
	printseen(result);
	system("pause");
	return 0;
}
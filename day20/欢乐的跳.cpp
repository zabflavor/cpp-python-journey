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
			//要注意避免条件始终为真的情况，else if ((a - b) >= n || (b - a) >= n || (a - b) < 0 || (b - a) < 0)  尤其是当条特别复杂时，动手试一下这会不会是一个始终成立或不成立的条件   
			//一开始只有numbers[j] - numbers[j + 1]但是这样会无从大到八亿，“下表太小（负数）会崩，下表太大（越界）也会崩”，但是查值一旦超过n-1我们根本就不需要存储这个数据了，直接pass
			long long result[1005] = { 0 };   //不能直接写result[1005]={0} 这只是对1004这一个元素起作用
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

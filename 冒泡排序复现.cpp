#include<iostream>
using namespace std;
int main() {
	int arr[8] = { 4,3,6,8,7,5,2,1 };
	cout << "ÅÅĞòÇ°" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << " ";
	}
	for (int j = 0; j < 8 - 1; j++) {
		for (int k = 0; k < 8 - j - 1; k++) {
			if (arr[k] > arr[k + 1]) {
				int temp = arr[k];
				arr[k] = arr[k + 1];
				arr[k + 1] = temp;
			}

		}
	}
	cout << endl;
	cout<<"ÅÅĞòºó" << endl;
	for (int i = 0; i < 8; i++) {
		cout << arr[i] << " ";
	}
}
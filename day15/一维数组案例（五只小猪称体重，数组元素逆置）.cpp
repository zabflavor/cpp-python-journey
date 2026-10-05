#include<iostream>
using namespace std;
int main() {
	int arr[5] = { 300,350,400,200,250 };
	int max = 0;//arr[0]更合适
	for (int i = 0; i < 5; i++) {
		if (arr[i] > max) {
			max = arr[i];  //两个等号是判断，输出只有true or false
		}
	
	}
	cout << "最重的小猪体重为" << max << endl;

	cout << endl;

	int arr2[6] = { 1,2,4,3,5,6 };
	for (int i = 0; i < 6; i++) {
		cout << arr2[i];
	}
	cout << endl;
	int start = 0;
	int end = (sizeof(arr2) / sizeof(arr[0]))-1;
	for (; start < end;) {
		int temp = arr2[start];
		arr2[start] = arr2[end];
		arr2[end] = temp;        //逆置就是不断交换顺序
		start++, end--;
	}
	for (int a = 0; a < sizeof(arr2) / sizeof(arr[0]); a++) {
		cout << arr2[a];
	}
	system("pause");
	return 0;
}

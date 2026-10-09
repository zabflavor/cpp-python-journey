//其实最大的问题是要在编写代码的时候想清楚排序轮数，对比次数与数组内元素个数之间的关系
#include<iostream>
using namespace std;
int main() {
	int arr[9] = { 3,4,6,2,9,7,8,1,5 };
	cout << "排序前"<<endl  ;
	for (int a = 0; a < 9; a++) {
		cout << arr[a] << " ";
	}
	for (int i = 0; i < 9 - 1; i++) {
		//外层：排序轮数=元素个数-1
		for (int j = 0; j < 9 - i - 1; j++) {
			//内层：对比次数=元素个数-排序轮数-1
			if (arr[j] > arr[j + 1]) {
				int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;//交换元素的固定搭配
			}
		}

	}
	cout << endl;
	cout << "排序后" <<endl;
	for (int a = 0; a < 9; a++) {
		cout << arr[a] << " ";
	}
	system("pause");
	return 0;
}

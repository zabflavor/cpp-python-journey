#include<iostream>
using namespace std;
int main() {
	int array[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = array;//arr就是数组首地址
	for (int i = 0; i < 10; i++) {
		cout << *p << endl;
		p++;//p++就是把地址往后加四个，到下一个元素

	}
	return 0;
}
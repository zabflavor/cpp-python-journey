#include<iostream>
using namespace std;
void func1(int* p1, int* p2) {
	if (p1 == nullptr || p2 == nullptr)return;
	int temp = *p2;
	*p2 = *p1;
	*p1 = temp;
}
int main() {
	int a = 10;
	int b = 30;
	cout << "交换前 a= " << a << endl;
	cout << "交换前 b= " << b << endl;
	func1(&a, &b);
	cout << "交换后 a= " << a << endl;
	cout << "交换后 b= " << b << endl;
	return 0;
}
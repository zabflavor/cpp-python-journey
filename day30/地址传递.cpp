#include<iostream>
using namespace std;
void exchange(int* a, int* b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}
int main() {
	int a = 10;
	int b = 20;
	exchange(&a, &b);
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;//地址传递：形参会修饰实参

}
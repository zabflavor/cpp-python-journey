#include<iostream>
using namespace std;
int main() {
	int sum[3] = { 259,272,243 };
	int total = 0;
	for (int* p = sum; p < sum + sizeof(sum) / sizeof(sum[0]); p++) {
		total = total + *p;
	}
	cout << total;
	return 0;
}
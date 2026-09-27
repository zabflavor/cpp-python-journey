//·ê7¹ý
#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i <= 100; i++) { //  ||±íÊ¾»ò
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "ÇÃ×À×Ó" << endl;
		}
		else {
			cout << i << endl;
		}
	}
}

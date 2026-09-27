//逢7过
#include<iostream>
using namespace std;
int main() {
	for (int i = 0; i <= 100; i++) { //  ||表示或
		if (i % 7 == 0 || i % 10 == 7 || i / 10 == 7) {
			cout << "敲桌子" << endl;
		}
		else {
			cout << i << endl;
		}
	}
}
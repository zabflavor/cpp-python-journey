#include<iostream>
using namespace std;
int main() {
    int array[5] = { 98,90,89,67,67 };
    int temp;
    for (int i = 0; i < 5 - 1; i++) {
        for (int* q = array; q < array + 5-1-i; q++) {
            if (*q>*(q+1)) {
                temp = *q;
                *q = *(q + 1);
                *(q + 1) = temp;
            }
        }
    }
    for (int i = 0; i < 5; i++) {
        cout << array[i] << " ";
    }
	return 0;
}
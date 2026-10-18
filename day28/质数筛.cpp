//题目没有强调去重的时候，不要去重
#include<iostream>
using namespace std;
int main() {
	long long array[105] = {};
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> array[i];
	}
    for (long long i = 0;i<n ; i++) {        
        // 第一步：判断 i 是不是质数
        bool isPrime = true;
        if (array[i] == 1) {
            isPrime = false;
        }
        for (long long b = 2; b < array[i]; b++) {  
            if (array[i] % b == 0) {
                isPrime = false;
                break;
            }

           
        }
        if (isPrime) {
            cout << array[i] << " ";
        }
    }
}

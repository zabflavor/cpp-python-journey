#include<iostream>
#include <cmath>
#include <iomanip>      // 提供 fixed 和 setprecision，用来控制小数位数
using namespace std;
int main() {
	double number[6] = {};
	for (int i = 0; i <6 ; i++) {
		cin >> number[i];
   }
        double a, b, c;
        a = sqrt((number[1] - number[3]) * (number[1] - number[3]) + (number[0] - number[2]) * (number[0] - number[2]));
        b = sqrt((number[1] - number[5]) * (number[1] - number[5]) + (number[0] - number[4]) * (number[0] - number[4]));
        c = sqrt((number[5] - number[3]) * (number[5] - number[3]) + (number[4] - number[2]) * (number[4] - number[2]));
        double p = a + b + c;
        cout << fixed << setprecision(2)            // 保留 1 位小数（相当于 %.1f）
            << p << endl;   // 输出
        return 0;
}

#include <iostream>     // iostream，提供 cin 和 cout
#include <cmath>
#include <iomanip>      // 提供 fixed 和 setprecision，用来控制小数位数

using namespace std;   

int main() {
    double a, b, c;
    cin >> a >> b >> c;                         // 读入
    double p = (a + b + c) / 2;
    cout << fixed << setprecision(1)            // 保留 1 位小数（相当于 %.1f）
        << sqrt(p * (p - a) * (p - b) * (p - c)) << endl;   // 
    return 0;
}
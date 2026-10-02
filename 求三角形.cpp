#include <iostream>
#include <cstdio>      // printf 需要
using namespace std;

int main() {
    int n;
    cin >> n;
    int num = 1;
    //第一部分：方阵
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            printf("%02d", num++);
        }
        cout << endl;//输出列

    }
    cout << endl;
    //第二部分：三角形
    num = 1;
    for (int i = 1; i <= n; i++) {
        for (int s = 1; s <= n-i; s++) {
            cout << "  ";
        }
        for (int j = 1; j <=i; j++) {
            printf("%02d", num++);
        }
        cout << endl;
    }
    system("pause");
    return 0;
}
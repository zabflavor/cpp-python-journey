#include<iostream>
using namespace std;
int main() {
    //while(循环条件)(循环语句)   只要循环条件为真，就执行循环语句   一定要避免死循环的出现
    //在屏幕中打印0`9这10个数字
    int num = 0;
    while (num < 10) {
        cout << num << endl;
        num++;
    }
    
    system("pause");
    return 0;
    
}

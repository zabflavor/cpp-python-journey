/*/#include<iostream>
using namespace std;
int main() {
	int a = 0;
	int sum = 0;
	cin >> a;
	for (int i = 0; i < a;i++) {
		for (int b = 2; b <= i; b++) {
			for (int c = 2; c <= i; c++) {
				if (i != c * b) {
					cout << i << endl;
				}
			}
		}
		
		sum++;

	}
	cout << sum << endl;
	system("pause");
	return 0;
}*/
#include <iostream>
using namespace std;

int main() {
    int L;
    cin >> L;  

    int sum = 0;      // 口袋总重量（质数之和）
    int count = 0;    // 装下的质数个数

    for (int i = 2; ; i++) {           // 从 2 开始；条件留空=一直走，靠 break 退出
        // 第一步：判断 i 是不是质数
        bool isPrime = true;
        for (int b = 2; b < i; b++) {  // 用 2 ~ i-1 挨个试除
            if (i % b == 0) {
                isPrime = false;
                break;
            }
        }

        // 第二步：是质数就尝试装进口袋
        if (isPrime) {
            if (sum + i <= L) {        // 装得下
                sum += i;
                count++;
                cout << i << endl;
            }
            else {                   // 装不下：更大的质数更装不下
                break;                 // 结束一切
            }
        }
    }

    cout << count << endl;             // 最后输出个数
    return 0;
}
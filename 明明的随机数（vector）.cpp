#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main() {
	int n;
	vector<int> v;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int k;
		cin >> k;
		v.push_back(k);
	}
	sort(v.begin(), v.end());
    // 第一遍：数一数有多少个"不同的数"
    int sum = 0;
    for (int i = 0; i < v.size(); i++) {
        if (i == 0 || v[i] != v[i - 1]) {
            sum++;              // 第一个数一定算一个；跟上一个不同也算新的
        }
    }
    cout << sum << endl;        // 题目要求先输出个数

    // 第二遍：把这些数按顺序输出
    for (int i = 0; i < v.size(); i++) {
        if (i == 0 || v[i] != v[i - 1]) {    //v[i] != v[i - 1]输出的时候选择性输出，而不是删去容器中的重复元素
            cout << v[i] << " ";
        }
    }
    cout << endl;
	return 0;
}
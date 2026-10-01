#include<iostream>
#include<iomanip>
using namespace std;
int main() {
	int n;
	cin >> n;
	int a[1001];//创建一个数组
	int sum = 0;
	int maxv = 0;
	int minv = 10;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		sum += a[i];//求和时用，sum=sum+a[i]
		if (a[i] > maxv)maxv = a[i];//求最大值         这样子保证了取最高分的时候只去掉一个
		if (a[i] < minv)minv = a[i];//求最小值
	}
	double ans = (double)(sum - maxv - minv) / (n - 2);
	//第一个double是声明ans用来存小数，第二个double是保证除法这一步按小数规则算（前面的double管不到除法）
	cout << fixed << setprecision(2) << ans << endl;
	system("pause");
	return 0;
}

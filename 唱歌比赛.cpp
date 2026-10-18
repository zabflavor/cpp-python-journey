#include<iostream>
#include<iomanip>
using namespace std;
double calculate(int m,int array[]) {
	int maxv = -1;
	int minv = 100;
	int sum = 0;
	for (int i = 0; i < m; i++) {
		cin >> array[i];
		sum += array[i];//求和时用，sum=sum+a[i]
		if (array[i] > maxv)maxv = array[i];//求最大值         这样子保证了取最高分的时候只去掉一个
		if (array[i] < minv)minv = array[i];//求最小值
	}
	double ans = (double)(sum - maxv - minv) / (m - 2);
	//第一个double是声明ans用来存小数，第二个double是保证除法这一步按小数规则算（前面的double管不到除法）
	return (double)ans;
}
int main() {
	int m = 0;
	int n = 0;
	cin >> n;
	cin >> m;
	int array[21] = {};
	double array2[105] = {};
	for (int i = 0; i < n; i++) {
		array2[i]= (double)calculate(m, array);
	}
	double maxv = array2[0];
	for (int i = 0; i < n; i++) {
		if (array2[i] > maxv)maxv = array2[i];
	}
	cout << fixed << setprecision(2) << maxv<< endl;
}
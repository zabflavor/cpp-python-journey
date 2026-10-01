#include<iostream>
using namespace std;
int main(){
	int n = 0;
	cin >> n;
	double a[1001];
	double maxv = 0;
	double minv = 1000;
	for (int i = 0; i < n; i++) {
		cin >> a[i];
		if (a[i] > maxv)maxv = a[i];//求最大值
		if (a[i] < minv)minv = a[i];//求最小值
	}
	cout<<(double)maxv-minv<<endl;

	system("pause");
	return 0;
}
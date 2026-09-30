#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;
int main() {
	int a = 0;
	cin >> a;
	double b = (pow(((1 + sqrt(5)) / 2), a) - pow(((1 - sqrt(5)) / 2), a)) / sqrt(5);
		cout << fixed<<setprecision(2)<<b<<endl;
}

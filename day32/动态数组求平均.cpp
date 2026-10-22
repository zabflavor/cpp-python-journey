#include<iostream>
using namespace std;
int main() {
	int num;
	cin >> num;
	double* score = new double[num];
	for (int i = 0; i < num; i++) {
		cin >> score[i];
	}
	double average = 0;
	double total = 0;
	for (int i = 0; i < num; i++) {
		total = total + score[i];
	}
	average = total / num;
	cout << "平均分为：" << average << endl;
	delete[]score;
	return 0;
}
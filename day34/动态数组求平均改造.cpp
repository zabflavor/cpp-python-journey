#include<iostream>
using namespace std;
struct student {
	int score1;
	int score2;
	int score3;
};
int main() {
	int num;
	cin >> num;
	student* score = new student[num]();
	for (int i = 0; i < num; i++) {
		cin >> score[i].score1;
		cin >> score[i].score2;
		cin >> score[i].score3;
	}

	for (student*p=score; p < score+num; p++) {
		double average = 0, total = 0;
		total = total + p->score1 + p->score2 + p->score3;
		average = total / 3.0;
		cout << "平均分为：" << average << endl;
	}
	delete[]score;
	return 0;
}
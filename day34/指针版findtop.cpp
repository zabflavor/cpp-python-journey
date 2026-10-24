#include<iostream>
using namespace std;
struct student {
	int score;
};
int main() {
	int best = 0;
	student array[5] = { 90,90,90,90,90 };
	for (struct student*p=array; p < array+sizeof(array)/sizeof(array[0]); p++) {
		if (p->score > array[best].score) {
			best = p - array;
		}
	}
	cout <<best<< "最高分为：" << array[best].score << endl;
	return 0;
}
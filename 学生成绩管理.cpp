#include<iostream>
#include<string>
using namespace std;
struct student {
	string name;
	int score1;
	int score2;
	int score3;
};
void printAll(int n,struct student array[]) {
	for (int i = 0; i < n; i++) {
		cout << "姓名:" << array[i].name << "  语文成绩:" << array[i].score1 << "  数学成绩:" << array[i].score2 << "  英语成绩:" << array[i].score3 << endl;
	}
}
void calcavg(int n, struct student array[]) {
	double pingjunfen1;
	double pingjunfen2;
	double pingjunfen3;
	double zongfen[1000] = {};
	for (int j = 0; j < n; j++) {
		zongfen[0] += array[j].score1;
		zongfen[1] += array[j].score2;
		zongfen[2] += array[j].score3;
		pingjunfen1 = zongfen[0] / 5;
		pingjunfen2 = zongfen[1] / 5;
		pingjunfen3 = zongfen[2] / 5;
	}
		cout << "语文平均分为:" << pingjunfen1 << endl;
		cout << "数学平均分为:" << pingjunfen2 << endl;
		cout << "英语平均分为:" << pingjunfen3 << endl;
}
void findtop(int n, struct student array[]) {
	int sum[10] = {};
	for (int i=0; i < n; i++) {
		sum[i] = array[i].score1 + array[i].score2 + array[i].score3;
	}
	int best = 0;
	int max = sum[best];
	for (int i = 0; i < n; i++) {
		best = i;
		if (sum[best] > max) {
			max= sum[best];
		}
	}
	cout << "最高分为"<<array[best].name << "分数为：" << max << endl;
	}


int main() {
	struct student array[] = { {"小明",88,92,79},
	                           {"小红",95,87,90},
                               {"小刚",76,85,82},
                               {"小丽",91,78,88},
                               {"小华",83,90,85} };
	printAll(5,array);
	calcavg(5,array);
	findtop(5, array);

	return 0;
}
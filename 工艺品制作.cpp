#include<iostream>//不要边筛选边计数，这样子会有重复的情况，我们无法去除。因此我们先赋值（标记）最后再统计
using namespace std;
int main() {
	int cube[25][25][25] = { 0 };
	int a, b, c;
	cin >> a >> b >> c;                      //cin>>a,b,c;错误   cin>>a>>b>>c;
	int q;
	cin >> q;
	//废弃代码
/*	for (int e = 1; e <= q; e++) {
		int x1, x2, y1, y2, z1, z2;
		cin >> x1 >> y1 >> z1;
		cin >> x2 >> y2 >> z2;
		for (int i = 1; i <= a; i++) {//长
			for (int j = 1; j <= b; j++) {//宽
				for (int k = 1; k <= c; k++) {//高
					if (x1 <= i && i <= x2 && y1 <= j && j <= y2 && z1 <= k && k <= z2) {
						cube[i][j][k] = 1;
					}
				}
			}
		}
	}*/
	for (int e = 1; e <= q; e++) {//输入q次就直接把整套代码重复q次
		int x1, x2, y1, y2, z1, z2;
		cin >> x1 >> y1 >> z1;
		cin >> x2 >> y2 >> z2;
		for (int i = x1; i <= x2; i++) {
			for (int j = y1; j <= y2; j++) {
				for (int k = z1; k <= z2; k++) {
					cube[i][j][k] = 1;
				}
			}
		}
	}
	int sum = 0;
	for (int i = 1; i <= a; i++) {//长
		for (int j = 1; j <= b; j++) {//宽
			for (int k = 1; k <= c; k++) {//高
				if (cube[i][j][k] == 0) {
					sum++;
				}
			}
		}
	}//三维数组里有的是0，有的是1，要计数，我不能直接求和，用if+for循环，老套路，是0就sum++
	cout << sum << endl;

	system("pause");
	return 0;
}
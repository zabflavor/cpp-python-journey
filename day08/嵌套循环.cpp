#include<iostream>
using namespace std;
int main() {
	//利用嵌套循环打印星图
	for (int  a = 0; a < 10; a++)
	{
		//内层循环
		for (int i = 0; i < 10; i++) {
			cout << "* ";
		}
		cout << endl;
	}

	system("pause");
	return 0;

}

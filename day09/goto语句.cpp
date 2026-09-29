#include<iostream>
using namespace std;
int main() {
	//goto语句可以无条件跳转语句（不轻易使用）
	cout << "1、xxxx" << endl;
	goto FLAG;
	cout << "2、xxxx" << endl;
	cout << "3、xxxx" << endl;
	FLAG://标记第二次出现时候后面用冒号
	cout << "4、xxxx" << endl;


	system("pause");
	return 0;
}

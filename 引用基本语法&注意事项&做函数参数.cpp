#include<iostream>
using namespace std;
void myswap01(int a,int b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
void myswap02(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
int main() {
	//引用：给变量起别名
	//语法：数据类型 &别名=原名
	int a = 10;
	int& b = a;
	cout << a << endl;
	b = 20;//这个时候a和b操作的是同一块内存
	//引用注意事项
	//1、引号必须初始化
		//int& b;错误，必须初始化
	//2、引号初始化后，不可以改变
		//把b引用给a后，不能再引用给c
	int c = 30;
	b = c;//这里是赋值，不是引用
	cout << a << endl;
	cout << c << endl;
	//交换函数
	 //1、值传递(形参不会修饰实参，即下面的e和f并没有变)
	int e = 10;
	int f = 20;
	myswap01(e, f);
	cout << "e=" << e<<endl;
	cout << "f=" << f<<endl;
	 //2、引用传递(形参会修饰实参，即下面的e和f变了)
	myswap02(e, f);//相当于起了别名，所以操作修改会同步
	cout << "e=" << e << endl;
	cout << "f=" << f << endl;
	system("pause");
	return 0;
}
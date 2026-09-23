//实型：表示小数
#include<iostream>
using namespace std;
int main() {
	float f1 = 3.14f;//7位有效数字 单精度   单精度后面多加个f 机器默认双精度
	double d1 = 3.14;//15^16位有效数字 双精度              (其实没必要，不加额外的配置也默认显示六位)
	cout << "f1="<<f1 << endl;
	cout << "d1="<<d1 << endl;

	cout << "float占用的空间内存为" << sizeof(f1) << endl;
	cout << "double占用的空间内存为" << sizeof(d1) << endl;

	//科学计数法
	float f2 = 3e2;//3*10^2 e后面为整数10的n次方
	cout << "f2=" << f2 << endl;
	float f3 = 3e-2;//3*0.1^2 e后面负数10的负n次方
	cout << "f3=" << f3 << endl;
	system("pause");
	return 0;
}

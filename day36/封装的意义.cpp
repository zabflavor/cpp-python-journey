#include<iostream>
using namespace std;
//圆周率
const double PI = 3.14;
//设计一个圆类，求圆的周长
//圆求周长的公式：2*PI*半径

//class 代表设计一个类，类后面紧跟着的就是类名称
class circle {
	//访问权限
	//公共权限
public:
	//属性
	//半径
	int r;

	//行为
	//获取圆的周长
	double calculation() {
		return 2 * PI * r;
	};
};
int main() {
	//通过圆类 创建具体的圆（对象）
	//实例化（通过一个类，创建一个对象的过程）
	circle s1;
	//给圆对象属性进行赋值
	s1.r = 10;
	cout<<"圆的周长为"<<s1.calculation()<<endl;
	return 0;
}

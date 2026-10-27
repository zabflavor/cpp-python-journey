#include<iostream>
using namespace std;
//对象的初始化和清理
class person {
	//1、构造函数 进行初始化操作
	//没有返回值，不用写void
	//函数名与类名相同
	//构造函数可以有参数，可以发生重载
	//创建对象的时候，构造函数会自动调用，而且只调用一次
public:
	person(){
		cout << "person构造函数的调用" << endl;
	}
	//2、析构函数 进行清理操作
	//没有返回值，不用写void
	//函数名与类名相同 在名称前加 ~
	//析构函数不可以有参数，不可以发生重载
	//对象在销毁前，会自动调用析构函数，而且只调用一次
	~person() {
		cout << "person析构函数的调用" << endl;
	}
};
//构造和析构都是必须有的实现，如果我们自己不提供，编译器会提供一个空实现的构造和析构
void test01() {
	person p;   //在栈上的数据，test01执行完之后，释放这个对象
}
int main() {
	//test01();
	person p;   //这样子的话不会调用析构函数因为他还存在，main还没走完，还没被释放
	system("pause");
	return 0;
}
#include<iostream>
using namespace std;
//访问权限（函数也是）
//1、公共权限 public      成员类内可以访问，类外也可以访问
//2、保护权限 protected   成员类内可以访问，类外不可以访问（父亲保护中的内容儿子也可以用）
//3、私有权限 private     成员类内可以访问，类外不可以访问（儿子不可以访问父亲的私有内容）
class person {
public:
	string name;
protected:
	string car;
private:
	int password;
public:
	void func() {
		name = "张三";
		car = "拖拉机";
		password = 123456;
	}
};
int main() {
	//实例化具体对象
	person s1;
	s1.name = "zab";
	//s1.car = "奔驰";   在类外访问不到
	return 0;
}

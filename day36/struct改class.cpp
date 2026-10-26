#include<iostream>
using namespace std;
class c1 {
	int a;//默认权限是私有
};
struct c2 {
	int b;//默认权限是公共
};
int main() {
	//struct和class区别
	//struct默认权限是公共 public
	//class 默认权限是私有 private
	c1 c1;
	c2 c2;
	//c1.a = 100; 不可访问
	c2.b = 100;  //可以访问
	return 0;
}

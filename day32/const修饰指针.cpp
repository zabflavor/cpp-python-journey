#include<iostream>
using namespace std;
int main() {
	//*看作指针，p等为常量
	//const后面跟着是什么什么操作不能进行（如：后面紧跟*，后面不能再解引用）
	int a = 10;
	int b = 10;
	//1、const修饰指针 常量指针 (指针的指向可以变，但指针的值不可以变)
	const int* p = &a;
	  //*p=20;(错误)
	p = &b;
	//2、const修饰常量 指针常量 (指针的指向不可以变，但指针的值可以变)
	int* const j = &a;
	*j = 20;
	  //j=&b;(错误)
	//3、const既修饰指针又修饰变量(指针的指向不可以变，且指针的值不可以变)
	const int* const k = &a;
	  //*k=20;(错误)
	  // k=&b;(错误)
}

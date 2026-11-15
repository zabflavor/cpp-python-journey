#include<iostream>
using namespace std;
//函数模版(将类型参数化)
//交换整型函数
void swapint(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}
//交换浮点型函数
void swapdouble(double &a,double &b){
    double temp=a;
    a=b;
    b=temp;
}
//函数模版
template<typename T>//声明一个模版，告诉编译器后面代码中紧跟着的T不要报错，T是一个通用数据类型（自己定义的）
void myswap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
void test01(){
    int a=20;
    int b=10;
    //两种方式使用函数模版
    //1、自动推导类型
    //myswap(a,b)
    //2、显示指定类型
    //myswap<int>(a,b);
    myswap(a,b);
}
int main(){
    test01();
    return 0;
}
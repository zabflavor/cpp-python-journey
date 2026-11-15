#include<iostream>
using namespace std;
//普通函数与函数模版的调用规则
//1、如果函数模版和普通函数都可以调用，优先调用普通函数
//2、可以通过空模版参数列表 强制调用 函数模版
//3、函数模版可以发生函数重载
//4、如果函数模版可以产生更好的匹配，优先调用函数模版
void myprint(int a,int b){
    cout<<"调用的普通函数"<<endl;
}
template<class T>
void myprint(T a,T b){
    cout<<"调用的模版"<<endl;
}
template<class T>
void myprint(T a,T b,T c){
    cout<<"调用的重载模版"<<endl;
}
void test01(){
    int a=10;
    int b=20;
    myprint(a,b);
    //通过空模版参数列表，强制调用函数模版
    myprint<>(a,b);
    //模版可以重载
    myprint<>(a,b,100);
    //如果函数模版产生更好的匹配，优先调用函数模版
    char c1='a';
    char c2='b';
    myprint(c1,c2);//走模版都不用把字符转换成整型了，更方便，所以走模版
}
int main(){
    test01();
    return 0;
}
#include<iostream>
using namespace std;
//函数模版注意事项
template<typename T>//typename可以替换成class
void myswap(T &a,T &b){
    T temp=a;
    a=b;
    b=temp;
}
//1、自动类型推导，必须推导出一致的数据类型T才可以使用
//2、模版必须要确定出T的数据类型，才可以使用
template<typename T>
void func(){
    cout<<"func 调用"<<endl;
}
void test01(){
    //func(); 会报错，无法确定T的数据类型
    func<int>();//可以利用显示转换直接指定
}
int main(){
    return 0;
}

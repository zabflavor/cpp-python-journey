//函数：将一段经常使用的代码封装起来，减少重复代码
/* 定义的流程
返回值类型 函数名 （参数列表）
{
           函数体语句
           
           return表达式
}
*/
int add(int num1, int num2) { //num1和num2只是一个形式上的参数，简称形参
    int sum = num1 + num2;
    return sum;

}
#include<iostream>
using namespace std;
int main() {
    //main函数中调用add函数
    int a = 10;
    int b = 20;
    //函数调用语法：函数名称（参数）
      //a和b称为实际参数，简称实参
    int c=add(a, b);
    cout << c<<endl;
    a = 30;
    b = 40;
    c = add(a, b);
    cout << c << endl;
    system("pause");
    return 0;


}

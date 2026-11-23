#include<iostream>
#include<fstream>//头文件包含
//文本文件 写文件
using namespace std;
int main(){
    //创建流对象
    ofstream ofs;
    //指定打开方式
    ofs.open("text.txt",ios::out);
    //写
    ofs<<"zab"<<endl;
    //关闭文件
    ofs.close();
    return 0;
}

#include<iostream>
#include<fstream>
#include<string>
//文本文件 读文件
using namespace std;
int main(){
    //创建流对象
    ifstream ifs;
    //打开文件，并且判断是否成功打开
    ifs.open("text.txt",ios::in);
    if(!ifs.is_open()){
        cout<<"文件打开失败"<<endl;
        return 0;
    }
    else{
        //读数据
        //第一种
        char buf1[1024]={};
        while(ifs>>buf1){
            cout<<buf1<<endl;
        }
        //第二种
        char buf2[1024]={};
        while(ifs.getline(buf2,sizeof(buf2))){
            cout<<buf2<<endl;
        }
        //第三种
        string buf;
        while(getline(ifs,buf)){ //getline(输入流，string变量)
            cout<<buf<<endl;
        }
        //第四种
        char c;
        while((c=ifs.get())!=EOF){
            cout<<c;
        }
    }
    //关闭文件
    ifs.close();
    return 0;
}
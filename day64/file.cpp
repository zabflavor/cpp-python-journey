#include<iostream>
#include<fstream>
#include<string>
#include<map>
using namespace std;
int main(){
    fstream fs;
    fs.open("data.txt",ios::in);
    map<string,int>m;
    if(!fs.is_open()){
        cout<<"文件打开失败"<<endl;
    }
    else{
        string s;
        while(getline(fs,s)){
            m[s]+=1;
        }
    }
    fstream n;
    n.open("result.txt",ios::out);
    for(map<string,int>::iterator it=m.begin();it!=m.end();it++){
        n<<"姓名："<<(*it).first<<" 出现次数："<<it->second<<endl;
    }
    //抽查题：pandas 的 read_csv 一行就能读文件，C++ 为什么要写这么多行？
    //因为两者抽象层次不同：pandas 把"打开文件、解析文本、判断类型、内存增长"全包了，
    //一行是封装好的结果；C++ 把这些活全交给我自己写——建流对象、选打开模式、
    //判断打开成功、循环读、手动计数，每一行都对应一个我能亲自控制的细节。
    //所以不是 C++ 笨，是 pandas 开箱即用、C++ 每个零件都能自己调。
    fs.close();
    n.close();
    return 0;
}
#include<iostream>
#include<map>
using namespace std;
//map容器中的查找和统计
void test01(){
    //创建map容器
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    //查找
    map<int,int>::iterator pos=m.find(3);
     if(pos!=m.end()){
        cout<<"查找到元素key="<<(*pos).first<<endl;
    }
    else{
        cout<<"未找到元素 ";
    }
    //统计30的个数
    int num=m.count(30);
    cout<<num<<endl;
}
int main(){
    test01();
    return 0;
}
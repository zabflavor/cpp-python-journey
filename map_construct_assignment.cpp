#include<iostream>
#include<map>
using namespace std;
//map中所有元素都是pair
//pair中第一个元素为key（键值），第二个元素为value（实值）
//所有元素会根据元素的键值自动排序
//map不允许容器中有重复的键值，multimap允许容器中有重复的键值
void printmap(map<int,int>&m){
    for(map<int,int>::iterator it =m.begin();it!=m.end();it++){
        cout<<"key= "<<(*it).first<<" "<<"value= "<<it->second<<endl;
    }
}
void test01(){
    //创建map容器
    map<int,int>m;
    m.insert(pair<int,int>(1,10));
    m.insert(pair<int,int>(2,20));
    m.insert(pair<int,int>(3,30));
    printmap(m);
    //拷贝构造
    map<int,int>m2(m);
    //赋值
    map<int,int>m3;
    m3=m2;
}
int main(){
    test01();
    return 0;
}
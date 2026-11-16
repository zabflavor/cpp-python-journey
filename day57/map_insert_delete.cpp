#include<iostream>
#include<map>
using namespace std;
void printmap(map<int,int>&m){
    for(map<int,int>::iterator it =m.begin();it!=m.end();it++){
        cout<<"key= "<<(*it).first<<" "<<"value= "<<it->second<<endl;
    }
}
void test01(){
    //map容器插入与删除
    map<int,int>m;
    //插入
    //第一种
    m.insert(pair<int,int>(1,10));
    //第二种
    m.insert(make_pair(2,20));
    //第三种
    m.insert(map<int,int>::value_type(3,30));
    //第四种
    m[4]=40;//如果插错了，会按照key没有的情况下，创建出一对新的键值对
    //[]不建议插入，但可以利用key访问到value
    cout<<m[4]<<endl;
    printmap(m);
    //删除
    m.erase(m.begin());
    printmap(m);

    m.erase(3);//按照key删除（如果传入了一个key里面没有的值，就什么都不动）
    m.erase(m.begin(),m.end());
    //m.clear();
    
}
int main(){
    test01();
    return 0;
}
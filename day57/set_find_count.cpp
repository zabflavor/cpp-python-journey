#include<iostream>
#include<set>
using namespace std;
//set容器 查找和统计
//find(key); 查找key是否存在。若存在，返回该键的元素的迭代器；若不存在，返回set.end()
//count(key); 统计key元素的个数
void test01(){
    set<int>s1;
    //插入
    s1.insert(10);
    s1.insert(20);
    s1.insert(40);
    s1.insert(30);
    s1.insert(30);//对于set而言，数量要么是0，要么是1，传2个30也只会保留一个
    set<int>::iterator pos=s1.find(300);//返回的是迭代器
    if(pos!=s1.end()){
        cout<<"找到元素： "<<*pos<<endl;
    }
    else{
        cout<<"未找到元素 ";
    }
    //统计30的个数
    int num=s1.count(30);
    cout<<num<<endl;


}
int main(){
    test01();
    return 0;
}
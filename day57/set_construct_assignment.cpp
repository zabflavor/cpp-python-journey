#include<iostream>
#include<set>
using namespace std;
//set不允许有重复元素 multiset允许有重复元素
//set容器构造和赋值
void printset(set<int>&s){//引用传递不拷贝数据，节省内存
    for(set<int>::iterator it=s.begin();it!=s.end();it++){
        cout<<*it<<" ";
    }
}

void test01(){
    set<int>s1;
    //插入数据只有insert方式
    s1.insert(10);
    s1.insert(20);
    s1.insert(40);
    s1.insert(30);
    //set容器特点：所有元素插入的时候自动排序，set容器不允许插入重复值
    printset(s1);
    //拷贝构造
    set<int>s2(s1);
    printset(s2);
    //赋值
    set<int>s3;
    s3=s2;
    printset(s3);

}
int main(){
    test01();
    return 0;
}
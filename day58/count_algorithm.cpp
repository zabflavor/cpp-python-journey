#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
//常用查找算法 count
//1、统计内置数据类型
void test01(){
    vector<int>v;
    v.push_back(10);
    v.push_back(20);
    v.push_back(30);
    v.push_back(40);
    v.push_back(30);
    int num=count(v.begin(),v.end(),30);
    cout<<"30的元素个数为:"<<num<<endl;
}
//2、统计自定义数据类型
class Person{
public:
    Person(string name,int age){
        this->m_Name=name;
        this->m_Age=age;
    }
    //重载== 底层find知道如何对比person数据类型
    bool operator==(const Person&p){
        if(this->m_Age==p.m_Age){
            return true;
        }
        else{
            return false;
        }//三目运算符也很不错
    }
    string m_Name;
    int m_Age;
};
void test02(){
    vector<Person>v;
    //创建数据
    Person p1("aaa",10);
    Person p2("bbb",20);
    Person p3("ccc",10);
    Person p4("ddd",40);
    //放入容器
    v.push_back(p1);
    v.push_back(p2);
    v.push_back(p3);
    v.push_back(p4);
    Person p5("eee",10);
    int num=count(v.begin(),v.end(),p5);
    cout<<"和eee同岁的有"<<num<<"人"<<endl;
}
int main(){
    test01();
    test02();
    return 0;
}
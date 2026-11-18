#include<iostream>
#include<vector>
#include<algorithm>
#include<functional>
using namespace std;
//常用排序算法 sort
void test01(){
    vector<int>v;
    v.push_back(10);
    v.push_back(40);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    //利用sort进行生序
    sort(v.begin(),v.end());
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
    //改为降序
    sort(v.begin(),v.end(),greater<int>());
    for(vector<int>::iterator it=v.begin();it!=v.end();it++){
        cout<<*it<<endl;
    }
}
int main(){
    test01();
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
//常用查找算法 binary_search
void test01(){
    vector<int>v;
    for(int i=0;i<10;i++){
        v.push_back(i);
    }
    //查找容器是否有9
    //注意容器必须是有序的序列，如果是无序的，结果未知
    bool ret=binary_search(v.begin(),v.end(),9);
    if(ret){
        cout<<"找到了"<<endl;
    }
    else{
        cout<<"未找到"<<endl;
    }
}
int main(){
    return 0;
}
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x,q;
    cin>>x;
    vector<int>v;
    for(int i=0;i<x;i++){
        cin>>q;
        v.push_back(q);
    }
    int y;
    cin>>y;
    sort(v.begin(),v.end());
    for(vector<int>::iterator pos=v.begin();pos!=v.end();pos++){
        cout<<*pos<<" ";
    }
    cout<<endl;
    vector<int>::iterator it=find(v.begin(),v.end(),y);
    if(it==v.end()){
        cout<<"没有找到"<<endl;
    }
    else{
        cout<<"找到"<<*it<<endl;
    }
    int num=count(v.begin(),v.end(),y);
    cout<<num<<endl;
    return 0;
}
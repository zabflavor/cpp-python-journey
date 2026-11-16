#include<iostream>
#include<map>
using namespace std;
int main(){
    map<int,int>m;
    int n,x;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>x;
        m[x]+=1;
    }
    for(map<int,int>::iterator it=m.begin();it!=m.end();it++){
        cout<<"数字："<<(*it).first<<" 出现次数："<<it->second<<endl;
    }
    return 0;
}
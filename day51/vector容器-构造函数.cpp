#include<iostream>
#include<vector>
using namespace std;
//vector相当于一个数组，但是可以动态扩展(找个更大的内存把数据拷贝过去，再删除原有内存)
void Print(vector<int>&v) {
	for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
		cout << *it << endl;
	}
}
//vector容器的构造
void test01() {
	vector<int>v1;//默认构造 无参构造
	for (int i = 0; i < 10; i++) {
		v1.push_back(i);
	}
	Print(v1);

	//通过区间方式构造
	vector<int>v2(v1.begin(), v1.end());
	Print(v2);
	//n个elem方式构造
	vector<int>v3(10, 100);  //(个数，赋值)
	Print(v3);
	//拷贝构造
	vector<int>v4(v3);
	Print(v4);
}
int main() {
	test01();
	return 0;
}
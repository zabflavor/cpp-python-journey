#include<iostream>
using namespace std;
int main() {
	//用来表示不能显示出来的ASCII字符
	//换行       \n
	cout << "hello world\n" ;      //(<<endl;)与\n作用相同都是换行输出
	//反斜杠     \\(反斜杠会续行)
    cout<<"\\"<<endl;
	//水平制表符  \t      可以整齐输出数据
	cout << "aaa\tzabzab" << endl;
	cout << "aaaaaa\tzabzab" << endl;
	cout << "aaa\tzabzabzabzab" << endl;
	system("pause");
	return 0;
}

#include<iostream>
using namespace std;
int main() {
	//¸³ÖµÔËËã·û
	//=
	int a = 10;
	a = 100;//(¸³Öµ°ÑÇ°ÃæµÄa=10¸²¸ÇµôÁË)
	cout << "a=" << a << endl;
	//+=
	a = 22;
	a += 2;//a=a+2;
	cout << "a=" << a << endl;
	//-=
	a = 10;
	a -= 2;//a=a-2;
	cout << "a=" << a << endl; 
	//*=
	a = 34;
	a *= 2;//a=a*2;
	cout << "a=" << a << endl;
	// /=
	a = 24;
	a /= 2;//a=a/2;
	cout << "a=" << a << endl;
	//%=
	a = 8;
	a %= 3;//a=a%3;
	cout << "a=" << a << endl;
	system("pause");
	return 0;
}

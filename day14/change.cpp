#include"change.h"



//º¯ÊýµÄ¶¨Òå
void change(int a, int b)
{
	int initial = a;
	a = b;
	b = initial;

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}

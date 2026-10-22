#include<iostream>
using namespace std;
int myStrlen(char* s) {
    int count = 0;
    char* p = s;              // p 从字符串开头出发
    while (*p!='\0') {        // 填空1：什么时候继续走？(p走到\0的时候停下来)
        count++;
        p++;                  // 往前走一格
    }
    return count;
}
int main() {
    char s[] = "hello";
    char t[] = "";
    cout << myStrlen(s) << endl;    // 5
    cout << myStrlen(t) << endl;    // 0
	return 0;
}
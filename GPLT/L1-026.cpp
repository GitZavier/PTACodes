#include <iostream>
const char str[12] = "I Love GPLT";// 注意定义数组长度的时候要为字符串的总长度+1，因为要在最后一个元素存放字符串结束标志'\0'
using namespace std;
int main(int argc, char *argv[]) {
	int i=0;
	while (str[i]!='\0') {
		printf("%c\n", str[i++]);
	}
	return 0;
}
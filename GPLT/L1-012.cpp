#include <iostream>
// L1-012. 计算指数
using namespace std;
int main(int argc, char *argv[]) {
	int n;
	scanf("%d", &n);
	printf("2^%d = %d", n, 2<<(n-1));// 使用以为运算符效率更高
	return 0;
}
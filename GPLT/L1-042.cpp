#include <stdio.h>

int main(int argc, char *argv[]) {
	char str[11];
	char *s;// 方便输出字符串的年份，第8行
	s = str;
	scanf("%s", s);
	printf("%s-", s+6);// 输出年份
	s[5] = '\0';// 截掉年份
	printf("%s\n",s);// 输出剩余部分
	return 0;
}
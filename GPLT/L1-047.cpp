#include <iostream>

using namespace std;

struct{// 使用结构体保存一个人的三项信息
	char name[4];// 姓名
	int b;// 呼吸频率
	int h;// 脉搏
}person;

int main(int argc, char *argv[]) {
	int n, i;
	scanf("%d", &n);
	for(i=0;i<n;i++){
		scanf("%s %d %d", person.name, &person.b, &person.h);
		if(person.b<15 || person.b>20 || person.h<50 || person.h>70){// 每输入一个人的信息就判断，符合条件就输出
			puts(person.name);
		}
	}
	return 0;
}
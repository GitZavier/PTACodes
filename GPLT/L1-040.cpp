#include <iostream>

using namespace std;

struct{
	char sex;
	float h;
}p;

int main(int argc, char *argv[]) {
	int n, i;
	scanf("%d", &n);
	
	for(i=0; i<n; i++){
		getchar();// 过滤缓冲区中的回车
		scanf("%c %f", &p.sex, &p.h);
		if(p.sex=='M'){
			printf("%.2f\n", p.h/1.09);
		}else{
			printf("%.2f\n", p.h*1.09);
		}
	}
	
	return 0;
}
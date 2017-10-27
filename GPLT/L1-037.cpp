#include <iostream>
// L1-037. A除以B
using namespace std;
int main(int argc, char *argv[]) {
	float a,b;
	scanf("%f %f", &a,&b);// 因为结果需要有两位小数，所以这里直接用float保存便于后边做除法
	if(b<0) {
		printf("%.0f/(%.0f)=%.2f\n",a,b,a/b);
	}
	else if(b>0) {
		printf("%.0f/%.0f=%.2f\n",a,b,a/b);	
	}
	else {
		printf("%.0f/0=Error\n",a);
	}
	return 0;
}
#include <iostream>
#include <cctype>// toupper函数所在头文件
// L1-023. 输出GPLT
using namespace std;
int times[4];// times数组分别用来存放'G'/'P'/'L'/'T'出现的次数，必须定义为全局变量，在main中定义会超时
int main(int argc, char *argv[]) {
	string str;
	cin >> str;
	for(int i=0;i<str.length();i++) {// 统计字符出现次数
		switch (toupper(str[i])) {
			case 'G':times[0]++;break;
			case 'P':times[1]++;break;
			case 'L':times[2]++;break;
			case 'T':times[3]++;break;
			default:break;
		}
	}
	while(times[0]!=0||times[1]!=0||times[2]!=0||times[3]!=0) {// 输出
		if(times[0]!=0) {cout << "G";times[0]--;}
		if(times[1]!=0) {cout << "P";times[1]--;}
		if(times[2]!=0) {cout << "L";times[2]--;}
		if(times[3]!=0) {cout << "T";times[3]--;}
	}
	return 0;
}
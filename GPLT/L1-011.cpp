#include <iostream>
// L1-011. A-B
using namespace std;
bool flag[256]={false};// 用来记录字符串B中出现过哪些字符，默认为false
int main(int argc, char *argv[]) {
	string a,b;
	getline(cin,a);
	getline(cin,b);
	for(int i=0;i<b.size();i++){
		flag[b[i]]=true;
	}
	for(int j=0;j<a.size();j++){
		if(!flag[a[j]]){// 如果A的当前字符未在B中出现过，则输出
			cout<<a[j];
		}
	}
	return 0;
}
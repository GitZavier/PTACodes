#include <iostream>
// L1-017. 到底有多二
using namespace std;
bool neg=false;// true=1 false=0
float even=1;
int main(int argc, char *argv[]) {
	string n;
	int numOf2=0;
	getline(cin,n);
	if('-'==n[0]){neg=true;}
	if((n[n.size()-1]-48)%2==0){even=2;}
	for(int i=0;i<n.size();i++){
		if('2'==n[i]){
			numOf2++;
		}
	}
	printf("%.2f%%\n",(numOf2*1.0/(n.size()-neg))*(neg?1.5:1)*even*100);// 要先把numOf2*1.0转化为浮点数，否则结果会直接为0
	return 0;
}
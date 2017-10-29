#include <iostream>
#include <sstream>// stringsteam()所在头文件
// L1-016. 查验身份证
using namespace std;

bool allPassed = true;

bool isNum(string str){// 判断id前17位是否全部为数字
	stringstream sin(str);
	double d;
	char c;
	if(!(sin >> d)){
		return false;
	}
	if(sin >> c){
		return false;
	}
	return true;
}

const int w[]={7,9,10,5,8,4,2,1,6,3,7,9,10,5,8,4,2};
const char m[]={'1','0','X','9','8','7','6','5','4','3','2'};

int main(int argc, char *argv[]) {
	int n,sum;
	cin >> n;
	string id,substr;// substr用于获取前17位
	getchar();// 过滤回车
	while(n--){
		getline(cin,id);
		substr = id.substr(0,17);// 获取id的前17位
		if(!isNum(substr)){
			allPassed = false;
			cout<<id<<endl;
			continue;
		}else{
			sum=0;
			for(int i=0;i<17;i++){
				sum += (id[i]-48)*w[i];
			}
			if(m[sum%11]!=id[17]){
				allPassed=false;
				cout<<id<<endl;
			}
		}
	}
	if(allPassed){
		cout << "All passed"<<endl;
	}
	return 0;
}

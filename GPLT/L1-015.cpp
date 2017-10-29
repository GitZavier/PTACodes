#include <iostream>
#include <cmath>// 四舍五入函数round()所在头文件
// L1-015. 跟奥巴马一起画方块
using namespace std;
int main(int argc, char *argv[]) {
	int n;
	char c;
	cin >> n >> c;;
	for(int i=0;i<round(n/2.0);i++){
		for(int j=0;j<n;j++){
			cout << c;
		}
		cout << endl;
	}
	
	return 0;
}
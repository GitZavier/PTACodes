#include <iostream>
#include <map>
#include <vector>
// L1-027. 出租
using namespace std;

int main(int argc, char *argv[]) {
	string phone;
	map<int, bool> numbers;
	vector<int> arr;
	map<char, int> indexes;
	int i,j;
	cin >> phone;
	for(i=0;i<11;i++) {// 统计都有哪些数字出现了
		if(!numbers[phone[i]-48]){
			numbers[phone[i]-48] = true;
		}
	}
	for(i=9,j=0;i>=0;i--){// 从大到小将9-0中出现了的数字添加到动态数组arr中
		if(numbers[i]) {
			arr.push_back(i);
			indexes[i+48]=j++;// 并同时将每个数字在arr中的索引记录在indexes键值对中
		}
	}
	cout << "int[] arr = new int[]{";
	for(i=0;i<arr.size()-1;i++) {
		cout << arr[i] << ",";
	}
	cout << arr[arr.size()-1] << "};" << endl << "int[] index = new int[]{";
	for(i=0;i<10;i++) {
		cout << indexes[phone[i]] << ",";
	}
	cout << indexes[phone[i]] << "};";
	return 0;
}
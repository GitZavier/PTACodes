#include <iostream>
#include <cmath>
// L1-028. 判断素数
using namespace std;

bool isPrime(int n) {
	if (n <= 3) {
		return n>1;
	} else if (n % 2 == 0 || n % 3 == 0) {
		return false;
	} else {
		for (int i = 5; i <= sqrt(n); i += 6) {
			if (n % i == 0 || n % (i + 2) == 0) {
				return false;
			}
		}
		return true;
	}
}

int main(int argc, char *argv[]) {
	int n,x;
	cin >> n;
	while(n--){
		cin >> x;
		isPrime(x)?cout << "Yes"<<endl:cout << "No"<<endl;
	}
	return 0;
}
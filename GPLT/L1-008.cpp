#include <iostream>
#include <cstdio>
using namespace std;
// L1-008. 求整数段和
int main() {
    int a, b;
    cin >> a >> b;
    int temp = a;
    int sum = 0;
    while(temp <= b) {
        for(int j = 0; j < 5 && temp <= b; j++) {
            printf("%5d", temp);
            sum += temp;
            temp++;
        }
        cout << endl;
    }
    cout << "Sum = " << sum;
    return 0;
}
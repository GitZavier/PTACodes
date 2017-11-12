#include<iostream>
using namespace std;
// L1-046. 整除光棍
long long s;
int length = 1;
int main()
{
    int n;
    cin >> n;
    for(s=1;s<n;length++){
        s = s*10 + 1;
    }
    while(1) {
        if(s%n==0) {
            cout << s/n;
            break;
        } else {
            cout << s/n;
            s%=n;
            s = s*10 + 1;
            length++;
        }
    }
    cout << " " << length << endl;
    return 0;
}
#include <iostream>
using namespace std;
// L1-003. 个位数统计
int main()
{
    string str;
    cin >> str;
    int arr[10] = {0}, length = str.length();
    while(length--){
        arr[str[length]-'0']++;
    }
    for(int i=0;i<10;i++)
        if(arr[i]>0)
            cout << i << ":" << arr[i] << endl;
    return 0;
}
#include <iostream>
using namespace std;
// L1-007. 念数字
int main()
{
    string pinyin[10] = {"ling", "yi", "er", "san", "si", "wu", "liu", "qi", "ba", "jiu"};
    string number;
    cin >> number;
    if(number[0] == '-')
        cout << "fu";
    else
        cout << pinyin[number[0]-'0'];
    for(int i=1;i<number.length();i++)
        cout << " " << pinyin[number[i]-'0'];
    return 0;
}
// 方法一
#include <cstdio>
int main()
{
    char c[7];
    int i = 0;
    c[i] = getchar();
    while(c[i] != '\n' && i+1 < 7)
        c[++i] = getchar();
    printf("Hello %s", c);
    return 0;
}

// 方法二
#include <iostream>
using namespace std;
int main()
{
  string str;
  cin >> str;
  cout << "Hello " << str << endl;
  return 0;
}

#include <stdio.h>

int main(void) {
    int n, cnt;
    scanf("%d",&n);
    for (cnt = 0; n != 1 ; cnt++) {
        (n%2==0)?(n=n/2):(n=(3*n+1)/2);
    }
    printf("%d\n",cnt);
    return 0;
}

#include <stdio.h>

int main(void) {
    int x,i;
    scanf("%d",&x);
    if(x>=0 && x<1000)
    {
        int b,s,g;
        b = x/100;
        s=x%100/10;
        g=x%10;
        for (i = 0; i < b; i++) {
            printf("B");
        }
        for (i = 0; i < s ; i++) {
            printf("S");
        }
        for (i = 0; i < g; i++) {
            printf("%d",i+1);
        }
    }
    return 0;
}

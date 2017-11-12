#include <cstdio>
#include <cstdlib>
// L1-009. N个数求和
/*
 重要是这几组测试数据：
 1
 -60/12
 -5
 
 3
 0/1 0/2 0/3
 0
 
 1
 2/10
 1/5
 
 3
 0/1 0/5 5/10
 1/2
 
 1
 -1/1
 -1
 
 1
 6/6
 1
 */
long long gcd(long a, long long b) {
    if(a%b==0) {
        return b;
    } else {
        return gcd(b, a%b);
    }
}

long long lcm(long long fm1, long long fm2) {
    return fm1*fm2/gcd(fm1,fm2);
}

int main() {
    int n,i;
    long long fz, fm, sumOfFz=0, sumOfFm=1, z=0,temp;
    scanf("%d", &n);
    for(i=0; i<n; i++) {
        scanf("%lld/%lld", &fz, &fm);
        if((temp=gcd(abs(fz), fm))!=1){// 能约分的先约分
            fz = fz/temp;
            fm = fm/temp;
        }
        temp = lcm(fm,sumOfFm);
        sumOfFz = sumOfFz*temp/sumOfFm+fz*temp/fm;
        sumOfFm = temp;
        if((temp = gcd(abs(sumOfFz),sumOfFm))!=1){// 能约分的先约分
            sumOfFz = sumOfFz/temp;
            sumOfFm = sumOfFm/temp;
        }
        if(abs(sumOfFz)>=sumOfFm) {
            z += sumOfFz/sumOfFm;
            if((sumOfFz %= sumOfFm)==0) {
                sumOfFm = 1;
            }
        }
    }
    if(z==0 && sumOfFz==0) {
        printf("0\n");
    } else {
        if(z) {
            printf("%lld", z);
        }
        if(sumOfFz) {
            if(z){printf(" ");}
            printf("%lld/%lld\n", sumOfFz, sumOfFm);
        } else {
            printf("\n");
        }
    }
    return 0;
}

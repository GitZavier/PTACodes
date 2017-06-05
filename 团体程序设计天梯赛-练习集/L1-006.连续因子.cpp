#include <cstdio>
#include <cmath>

using namespace std;

int main() {
    int N;
    scanf("%d", &N);
    for (int len = 12; len >= 1; len--) {// 由于 1 < N < 2^31，且 12! < N < 13!，可知最大连续子序列的长度不会超过12
        int startMax = sqrt(N);
        for (int start = 2; start <= startMax; start++) {
            long long int ans = 1;
            for (int i = start; i - start < len; i++)
                ans *= i;
            if (N % ans == 0) {
                printf("%d\n%d", len, start);
                for (int i = start + 1; i - start < len; i++)
                    printf("*%d", i);
                return 0;
            }
        }
    }
    printf("1\n%d", N);
    return 0;
}

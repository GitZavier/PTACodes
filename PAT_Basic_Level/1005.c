#include <stdio.h>

int modeChoose(int x) {
  return (x / 2 == 0) ? 0 : 1; // 0->偶数，1->奇数
}

int main() {
  int n, i;
  scanf("%d", &n);
  int a[n];
  for (i = 0; i < n; i++) {
    scanf("%d", &a[i]);
  }

  return 0;
}

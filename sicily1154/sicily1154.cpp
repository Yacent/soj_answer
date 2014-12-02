#include<stdio.h>
int a[10000000];
int main() {
    int T, i = 0, j = 0, k = 0, temp;
    scanf("%d", &T);
    for (i = 0; i < T; i++) {
        int n;
        scanf("%d", &n);
        for (j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }
        for (j = 0; j < n; j++) {
            for (k = n - 2; k >= j; k--) {
                if (a[k] > a[k + 1]) {
                    temp = a[k];
                    a[k] = a[k + 1];
                    a[k + 1] = temp;
                }
            }
        }
        for (j = 0; j < n; j++) {
            printf("%d\n", a[j]);
        }
    }
    return 0;
}

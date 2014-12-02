#include<stdio.h>
int main() {
    int a[11], high, sum = 0;
    int i = 0;
    for (i = 0; i < 10; i++) {
        scanf("%d", &a[i]);
    }
    scanf("%d", &high);
    high += 30;
    for (i = 0; i < 10; i++) {
        if (a[i] <= high) {
            sum += 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}

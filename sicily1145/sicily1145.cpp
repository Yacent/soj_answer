//  注意数组的初始化，只能全部初始化为0 
#include<stdio.h>
int main() {
    int len, m, i = 0, j = 0, sum = 0;
    int a[100], b[100];
    int c[50000] = {0};
    scanf("%d%d", &len, &m);
    for (i = 0; i < m; i++) {
        scanf("%d%d", &a[i], &b[i]);
    }
    for (i = 0; i < m; i++) {
        for (j = a[i]; j <= b[i]; j++) {
            c[j] = 1;
        }
    }
    for (i = 0; i <= len; i++) {  //  数轴从0开始 
        if (c[i] != 1) {
            sum += 1;
        }
    }
    printf("%d\n", sum);
    return 0;
}

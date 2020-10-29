/*???*/
#include<stdio.h>

void fun1(int a[]) {
    int b[55], i;
    for (i = 1; i < 55; i++) b[i] = a[i];
    for (i = 1; i <= 27; i++) a[2 * i - 1] = b[i];
    for (i = 1; i <= 27; i++) a[2 * i] = b[27 + i];
}

int main() {
    int a[55], i, n, j;
    scanf("%d", &n);
    for (i = 1; i < 55; i++) a[i] = i;
    for (j = 1; j <= n; j++) fun1(a);
    for (i = 1; i < 54; i++) printf("%d ", a[i]);
    if (i = 54) printf("%d", a[i]);
    return 0;
}

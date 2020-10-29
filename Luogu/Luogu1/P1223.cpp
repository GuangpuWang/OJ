//
// Created by GuangpuWang on 2020/4/14.
//
#include<bits/stdc++.h>

using namespace std;
int n;
struct A {
    int i;
    int time;
} a[1005];

int cmp(A a, A b) {
    return a.time < b.time;
}

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        a[i].i = i;
        scanf("%d", &a[i].time);
    }
    sort(a + 1, a + 1 + n, cmp);
    for (int i = 1; i <= n; ++i)
        printf("%d ", a[i].i);
    printf("\n");
    double sum = 0;
    for (int i = 1; i <= n; ++i) {
        sum += a[i].time * (n - i);
    }
    printf("%.2lf", sum / n);
    return 0;
}


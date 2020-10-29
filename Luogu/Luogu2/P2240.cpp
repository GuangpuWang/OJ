//
// Created by GuangpuWang on 2020/4/14.
//
#include<bits/stdc++.h>

using namespace std;
int n, m;
double ans;
struct A {
    int weight;
    int value;
    double one;
} a[110];

int cmp(A a, A b) {
    return a.one > b.one;
}

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        scanf("%d %d", &a[i].weight, &a[i].value);
        a[i].one = a[i].value * 1.0 / a[i].weight;
    }
    sort(a + 1, a + n + 1, cmp);
    for (int i = 1; i <= n; ++i) {
        if (a[i].weight - m >= 0) {
            ans += a[i].one * m;
            break;
        } else {
            ans += a[i].value;
            m -= a[i].weight;
        }
    }
    printf("%.2f", ans);
    return 0;
}


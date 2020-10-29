//
// Created by GuangpuWang on 2020/4/16.
//
#include<bits/stdc++.h>

using namespace std;
int n;
struct A {
    int a, b, ab;
} a[10100];

int cmp(A a, A b) {
    if (a.ab != b.ab)
        return a.ab < b.ab;
    else
        return a.b < b.b;
}

int sum[10100], ans1[10100], ans2[10100];

void cheng(int n) {
    for (int i = 1; i <= ans1[0]; ++i)
        ans1[i] *= n;
    for (int i = 1; i <= ans1[0]; ++i) {
        ans1[i + 1] += ans1[i] / 10;
        ans1[i] %= 10;
        if (i == ans1[0] && ans1[i + 1] != 0)
            ans1[0]++;
    }
}

void chu(int n) {
    memset(ans2, 0, sizeof(ans2));
    int t = 0;
    for (int i = ans1[0]; i >= 1; --i) {
        t = t * 10 + ans1[i];
        ans2[i] = t / n;
        if (ans2[0] == 0 && ans2[i] != 0)
            ans2[0] = i;
        t %= n;
    }
    for (int i = 1; i <= ans2[0]; ++i) {
        ans2[i + 1] += ans2[i] / 10;
        ans2[i] %= 10;
        if (i == ans2[0] && ans2[i + 1] != 0)
            ans2[0]++;
    }
}

int com() {
    if (ans2[0] > sum[0]) return 1;
    if (sum[0] > ans2[0]) return 0;
    for (int i = sum[0]; i >= 1; --i) {
        if (sum[i] > ans2[i]) return 0;
        if (sum[i] < ans2[i]) return 1;
    }
}

int fz() {
    for (int i = 0; i <= ans2[0]; ++i)
        sum[i] = ans2[i];
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i <= n; ++i) {
        scanf("%d%d", &a[i].a, &a[i].b);
        a[i].ab = a[i].a * a[i].b;
    }
    sort(a + 1, a + 1 + n, cmp);
    ans1[1] = 1;
    ans1[0] = 1;
    for (int i = 1; i <= n; ++i) {
        cheng(a[i - 1].a);
        chu(a[i].b);
        if (com())
            fz();
    }
    for (int i = sum[0]; i >= 1; --i)
        printf("%d", sum[i]);
    return 0;
}

//
// Created by GuangpuWang on 2020/4/25.
//
#include<bits/stdc++.h>

using namespace std;
int n, m, a[2000010];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    while (m--) {
        int t;
        scanf("%d", &t);
        printf("%d\n", a[t]);
    }
    return 0;
}

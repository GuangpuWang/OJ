//
// Created by GuangpuWang on 2020/4/10.
//
#include<bits/stdc++.h>

using namespace std;
int n, m, a[10010];

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 0; i < n; ++i)
        scanf("%d", &a[i]);
    for (int i = 1; i <= m; ++i) {
        next_permutation(a, a + n);
    }
    for (int i = 0; i < n; ++i) {
        printf("%d", a[i]);
        if (i < n - 1)
            printf(" ");
    }
    return 0;
}

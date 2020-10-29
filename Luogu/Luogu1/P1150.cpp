//
// Created by GuangpuWang on 2020/4/24.
//
#include <bits/stdc++.h>

using namespace std;
int n, m;

int main() {
    scanf("%d%d", &n, &m);
    for (int i = 1; i <= n; ++i) {
        if (i % m == 0)
            n++;
    }
    printf("%d", n);
    return 0;
}

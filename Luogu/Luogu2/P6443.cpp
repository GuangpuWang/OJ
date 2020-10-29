//
// Created by GuangpuWang on 2020/4/25.
//
#include <bits/stdc++.h>

using namespace std;
int m, n, k;

int main() {
    scanf("%d%d%d", &m, &n, &k);
    while (k--) {
        if (n * 2 >= m)
            n--;
        else if (n * 2 < m)
            m--;
    }
    if (m == 0 || n == 0)
        printf("0");
    else if (n * 2 <= m)
        printf("%d", n);
    else if (n * 2 > m)
        printf("%d", m / 2);
    return 0;
}

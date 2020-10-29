//
// Created by GuangpuWang on 2020/4/24.
//
#include <bits/stdc++.h>

using namespace std;
int m, n, cnt = 0;

int main() {
    scanf("%d%d", &m, &n);
    for (int i = m; i <= n; ++i) {
        int t = i;
        while (t) {
            if (t % 10 == 2)
                cnt++;
            t /= 10;
        }
    }
    printf("%d", cnt);
    return 0;
}

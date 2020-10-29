//
// Created by GuangpuWang on 2020/4/13.
//
#include<bits/stdc++.h>

using namespace std;
int n, a[1010];

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i / 2; ++j) {
            a[i] += a[j];
        }
        a[i] += 1;
    }
    printf("%d", a[n]);
    return 0;
}

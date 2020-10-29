//
// Created by GuangpuWang on 2020/4/16.
//
#include<bits/stdc++.h>

using namespace std;
int w, n, a[30010], cnt = 0;

int main() {
    scanf("%d%d", &w, &n);
    for (int i = 1; i <= n; ++i)
        scanf("%d", &a[i]);
    sort(a + 1, a + 1 + n);
    int i = 1, j = n;
    while (i <= j) {
        if (a[i] + a[j] <= w) {
            cnt++;
            i++;
            j--;
        } else {
            cnt++;
            j--;
        }
    }
    printf("%d", cnt);
    return 0;
}


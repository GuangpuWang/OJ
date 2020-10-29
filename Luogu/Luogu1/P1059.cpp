//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
int n, cnt;
int a[110], b[110];

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d", &a[i]);
        int j;
        for (j = 0; j < i; ++j)
            if (a[j] == a[i])
                break;
        if (j == i) {
            b[cnt++] = a[i];
        }
    }
    sort(b, b + cnt);
    printf("%d\n", cnt);
    for (int i = 0; i < cnt; ++i)
        printf("%d ", b[i]);
    return 0;
}

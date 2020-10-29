//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
int a[5000100];
int n, k;

void f(int l, int r) {
    int i = l, j = r, x = a[(l + r) / 2];
    while (i <= j) {
        while (a[i] < x) i++;
        while (a[j] > x) j--;
        if (i <= j) {
            swap(a[i], a[j]);
            i++;
            j--;
        }
    }
    if (k <= j) f(l, j);
    else if (i <= k) f(i, r);
    else {
        printf("%d", a[j + 1]);
        return;
    }
}

int main() {
    scanf("%d %d", &n, &k);
    for (int i = 0; i < n; ++i)
        scanf("%d",&a[i]);
    f(0, n - 1);
    return 0;
}

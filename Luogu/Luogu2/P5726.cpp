//
// Created by GuangpuWang on 2020/3/31.
//
#include <bits/stdc++.h>

using namespace std;
int a[1010];

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        cin >> a[i];
    }
    sort(a, a + n);
    double sum = 0;
    for (int i = 1; i < n - 1; ++i) {
        sum += a[i];
    }
    printf("%.2f", sum / (n - 2));
    return 0;
}

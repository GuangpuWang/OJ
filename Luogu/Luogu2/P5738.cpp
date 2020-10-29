//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n, m;
    cin >> n >> m;
    double max = 0;
    while (n--) {
        int a[m], sum = 0;
        for (int i = 0; i < m; i++)
            cin >> a[i];
        sort(a, a + m);
        for (int i = 1; i < m - 1; i++)
            sum += a[i];
        double t = sum * 1.0 / (m - 2);
        if (t > max)
            max = t;
    }
    printf("%.2f", max);
    return 0;
}

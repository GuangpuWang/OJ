//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;
int a[10];

int main() {
    int m, n;
    cin >> m >> n;
    for (int i = m; i <= n; i++) {
        int t = i;
        while (t) {
            a[t % 10]++;
            t /= 10;
        }
    }
    for (int i = 0; i < 10; i++)
        cout << a[i] << " ";
    return 0;
}
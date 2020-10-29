//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;
int a[40040], num = 1;

int main() {
    int n, sum = 0, t, flag = 0;
    cin >> n;
    while (sum < n * n) {
        cin >> t;
        sum += t;
        for (int i = 1; i <= t; i++)
            a[num++] = flag % 2;
        flag++;
    }
    for (int i = 1; i < num; i++) {
        cout << a[i];
        if (i % n == 0)
            cout << "\n";
    }
    return 0;
}
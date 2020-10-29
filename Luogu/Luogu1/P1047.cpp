//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int L, n, left, right, cnt = 0;
    cin >> L >> n;
    int a[L + 10];
    memset(a, 0, sizeof(a));
    while (n--) {
        cin >> left >> right;
        for (int i = left; i <= right; i++)
            a[i] = 1;
    }
    for (int i = 0; i <= L; i++)
        if (a[i] == 0)
            cnt++;
    cout << cnt;
    return 0;
}

//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>

using namespace std;

int main() {
    int k, cnt = 0, n = 0;
    cin >> k;
    while (n * (n + 1) < k * 2) {
        n++;
    }
    if (n * (n + 1) == k * 2) {
        for (int i = 1; i <= n; i++)
            cnt += i * i;
    } else {
        for (int i = 1; i <= n - 1; i++)
            cnt += i * i;
        int num = k - (n - 1) * n / 2;
        cnt += num * n;
    }
    cout << cnt;
    return 0;
}
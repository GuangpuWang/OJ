//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>

using namespace std;

int main() {
    int a[13], sum = 0, remain = 0;
    for (int i = 1; i <= 12; i++) {
        cin >> a[i];
        remain = 300 - a[i] + remain;
        if (remain < 0) {
            cout << -1 * i;
            return 0;
        }
        sum += (remain / 100) * 100;
        remain -= (remain / 100) * 100;
    }
    cout << sum * 1.2 + remain;
    return 0;
}

//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    long long int n, ans = 1;
    cin >> n;
    while (n >= 1) {
        ans = ans * n;
        n--;
    }
    cout << ans;
    return 0;
}

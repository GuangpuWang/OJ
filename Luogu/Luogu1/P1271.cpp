//
// Created by GuangpuWang on 2020/4/8.
//
#include <bits/stdc++.h>

using namespace std;
int a[2000005];

int main() {
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < m; ++i) {
        cin >> a[i];
    }
    sort(a, a + m);
    for (int i = 0; i < m; ++i) {
        cout << a[i] << " ";
    }
    return 0;
}

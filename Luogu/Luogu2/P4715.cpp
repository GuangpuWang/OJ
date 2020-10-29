//
// Created by GuangpuWang on 2020/5/29.
//
#include<bits/stdc++.h>

using namespace std;
int n;
struct team {
    int id, size;
} a[200];

int cmp(team a, team b) {
    return a.size > b.size;
}

int main() {
    cin >> n;
    n = pow(2, n);
    for (int i = 1; i <= n; ++i) {
        a[i].id = i;
        cin >> a[i].size;
    }
    sort(a + 1, a + 1 + n / 2, cmp);
    sort(a + 1 + n / 2, a + n + 1, cmp);
    if (a[1].size > a[n / 2 + 1].size)
        cout << a[n / 2 + 1].id;
    else
        cout << a[1].id;
    return 0;
}


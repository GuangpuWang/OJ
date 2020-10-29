//
// Created by GuangpuWang on 2020/4/9.
//
#include<bits/stdc++.h>

using namespace std;
int n, m;
int a[20005];

int main() {
    scanf("%d %d", &n, &m);
    for (int i = 0; i < n; ++i)
        cin >> a[i];
    sort(a, a + n, greater<int>());
    int i = 0;
    while (m > 0) {
        m -= a[i++];
    }
    printf("%d", i);
    return 0;
}

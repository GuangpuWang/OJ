//
// Created by GuangpuWang on 2020/4/14.
//
#include<bits/stdc++.h>

using namespace std;
int n, lasttime, cnt = 1;
struct A {
    int start, end;
} a[1000005];

int cmp(A a, A b) {
    return a.end < b.end;
}

int main() {
    scanf("%d", &n);
    for (int i = 0; i < n; ++i) {
        scanf("%d %d", &a[i].start, &a[i].end);
    }
    sort(a, a + n, cmp);
    int last = a[0].end, i = 0;
    while (i <= n) {
        i++;
        if (a[i].start >= last) {
            cnt++;
            last = a[i].end;
        }
    }
    printf("%d", cnt);
    return 0;
}


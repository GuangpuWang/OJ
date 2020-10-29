//
// Created by GuangpuWang on 2020/4/15.
//
#include<bits/stdc++.h>

using namespace std;
int n, s, a, b;
struct A {
    int high;
    int cost;
} apple[5050];

int cmp(A a, A b) {
    if (a.cost != b.cost)
        return a.cost < b.cost;
    else
        return a.high < b.high;
}

int main() {
    scanf("%d%d%d%d", &n, &s, &a, &b);
    for (int i = 1; i <= n; ++i) {
        scanf("%d %d", &apple[i].high, &apple[i].cost);
    }
    sort(apple + 1, apple + n + 1, cmp);
    int cnt = 0;
    for (int i = 1; i <= n; ++i) {
        if (s - apple[i].cost >= 0 && apple[i].high <= (a + b)) {
            cnt++;
            s -= apple[i].cost;
        }
    }
    printf("%d", cnt);
    return 0;
}



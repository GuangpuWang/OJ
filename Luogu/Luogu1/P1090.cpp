//
// Created by GuangpuWang on 2020/4/14.
//
#include<bits/stdc++.h>

using namespace std;
int n, t, ans = 0, cnt = 0;
priority_queue<int, vector<int>, greater<int> > a;

int main() {
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        scanf("%d", &t);
        a.push(t);
    }
    while (a.size() >= 2) {
        int t1 = a.top();
        a.pop();
        int t2 = a.top();
        a.pop();
        a.push(t1 + t2);
    }
    printf("%d", a.top());
    return 0;
}


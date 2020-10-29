//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    stack<int> a;
    int n;
    while (cin >> n && n) {
        a.push(n);
    }
    while (!a.empty()) {
        cout << a.top() << " ";
        a.pop();
    }
}

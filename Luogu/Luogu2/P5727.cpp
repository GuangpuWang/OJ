//
// Created by GuangpuWang on 2020/4/1.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    stack<int> a;
    while (n != 1) {
        a.push(n);
        if (n % 2)
            n = n * 3 + 1;
        else
            n /= 2;
    }
    a.push(1);
    while (!a.empty()) {
        cout << a.top() << " ";
        a.pop();
    }
    return 0;
}

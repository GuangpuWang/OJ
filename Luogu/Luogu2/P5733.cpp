//
// Created by GuangpuWang on 2020/4/2.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); i++)
        if (a[i] >= 'a' && a[i] <= 'z')
            a[i] = char(a[i] - 32);
    cout << a;
    return 0;
}

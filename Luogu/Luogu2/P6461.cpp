//
// Created by GuangpuWang on 2020/4/25.
//
#include <bits/stdc++.h>

using namespace std;
int a[4] = {0, 1, 2, 3};

int main() {
    string s;
    cin >> s;
    for (int i = 0; i < s.length(); ++i) {
        if (s[i] == 'A')
            swap(a[1], a[2]);
        else if (s[i] == 'B')
            swap(a[2], a[3]);
        else if (s[i] == 'C')
            swap(a[1], a[3]);
    }
    for (int i = 1; i <= 3; ++i)
        if (a[i] == 1)
            printf("%d", i);
    return 0;
}
//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a, b;
    cin >> a >> b;
    int aa = 1, bb = 1;
    for (int i = 0; i < a.length(); i++)
        aa = aa * (a[i] - 'A' + 1);
    for (int i = 0; i < b.length(); ++i) {
        bb = bb * (b[i] - 'A' + 1);
    }
    if (aa % 47 == bb % 47)
        cout << "GO";
    else
        cout << "STAY";
    return 0;
}

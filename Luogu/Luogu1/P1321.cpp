//
// Created by GuangpuWang on 2020/4/3.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int cnt1 = 0, cnt2 = 0;
    string a;
    cin >> a;
    for (int i = 0; i < a.length(); ++i) {
        if (a[i] == 'b' || a[i + 1] == 'o' || a[i + 2] == 'y')
            cnt1++;
        if (a[i] == 'g' || a[i + 1] == 'i' || a[i + 2] == 'r' || a[i + 3] == 'l')
            cnt2++;
    }
    cout << cnt1 << endl << cnt2;
    return 0;
}

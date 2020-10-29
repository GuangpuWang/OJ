//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;
struct Stu {
    int id;
    int cj1;
    int cj2;
    double cj3;
};
Stu s[1010];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i].id >> s[i].cj1 >> s[i].cj2;
        s[i].cj3 = 0.7 * s[i].cj1 + 0.3 * s[i].cj2;
    }
    for (int i = 1; i <= n; i++) {
        if ((s[i].cj1 + s[i].cj2) > 140 && s[i].cj3 >= 80)
            cout << "Excellent" << endl;
        else
            cout << "Not excellent" << endl;
    }
    return 0;
}



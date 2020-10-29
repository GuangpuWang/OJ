//
// Created by WGP on 2020/3/23.
//
#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int m, t, s;
    cin >> m >> t >> s;
    if (t == 0) {
        cout << m;
    } else {
        int aa = ceil(s * 1.0 / t);
        if (aa >= m) {
            cout << 0;
        } else
            cout << m - aa;
    }
    return 0;
}
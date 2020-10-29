//
// Created by WGP on 2019/10/18 at 22:33.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        sort(a, a + n);
        cout << a[n-1] << endl;
    }
    return 0;
}

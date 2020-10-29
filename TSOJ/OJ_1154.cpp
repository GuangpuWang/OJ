//
// Created by WGP on 2019/10/18 at 21:35.
//
#include <iostream>

using namespace std;

int main() {
    int m, n;
    while (cin >> m >> n && (m || n)) {
        long long int ans = 1, i = 1;
        while (n) {
            ans *= m;
            m--;
            ans /= i;
            i++;
            n--;
        }
        cout << ans << endl;
    }
    return 0;
}

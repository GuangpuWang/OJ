//
// Created by WGP on 2019/8/4 at 10:42.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    char a[20], b[60];
    while (cin >> a) {
        int len1 = strlen(a), k = 0;
        memset(b, 0, sizeof(b));
        for (int i = len1 - 1; i > 1; i--) {
            int num = a[i] - '0';
            int j;
            for (j = 0; j < k || num != 0; j++) {
                int z;
                if (j < k) {
                    z = b[j] - '0';
                } else {
                    z = 0;
                }
                int m = num * 10 + z;
                b[j] = m / 8 + '0';
                num = m % 8;
            }
            k = j;
        }
        cout << a << " [8] = 0." << b << " [10]" << endl;
    }
    return 0;
}

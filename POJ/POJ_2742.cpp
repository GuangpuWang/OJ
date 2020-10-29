//
// Created by WGP on 2019/8/4 at 13:52.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int n;
    while (cin >> n) {
        string a;
        while (n--) {
            cin >> a;
            int b[26];
            memset(b, 0, sizeof(b));
            int len = a.length();
            for (int i = 0; i < len; i++) {
                b[a[i] - 'a']++;
            }
            int max = 0, i;
            for (i = 0; i < 26; i++) {
                if (b[i] > b[max]) {//b[max]*****注意，好方法
                    max = i;
                }
            }
            cout << char(97+max) << " " << b[max] << endl;
        }
    }
    return 0;
}

//
// Created by WGP on 2019/8/3 at 16:07.
//
#include <iostream>

using namespace std;
string a;
string m;

int main() {
    int n;
    cin >> n;
    while (n--) {
        cin >> a;
        int len = a.length();
        int j = 0;
        for (int i = len - 1; i >= 0; i -= 4) {
            int t = 0, b = 1;
            for (int k = i; k >= i - 3; k--) {
                if (k < 0) {
                    break;
                }
                t += (a[k] - '0') * b;
                b *= 2;
            }
            if (t >= 10) {
                m[j] = char(65 - 10 + t);
                j++;
            } else {
                m[j] = t + '0';
                j++;
            }
        }
        for (int i = j - 1; i >= 0; i--) {
            cout << m[i];
        }
        cout << endl;
    }
    return 0;
}

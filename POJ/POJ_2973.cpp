//
// Created by WGP on 2019/8/3 at 15:20.
//
#include <iostream>

using namespace std;

int main() {
    string n;
    while (cin >> n) {
        int a = n.compare("0");
        if (a == 0) break;

        int len = n.length();
        int sum = 0, b = 1;
        for (int i = len - 1; i >= 0; i--) {
            b *= 2;
            sum += (n[i] - '0') * (b - 1);//注意 n[i] - '0'
        }
        cout << sum << endl;
    }
    return 0;
}

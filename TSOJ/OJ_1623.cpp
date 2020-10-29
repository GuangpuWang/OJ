//
// Created by WGP on 2019/11/10 at 11:04.
//
#include <iostream>

using namespace std;

int main() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        cin >> n;
        if (n == 0)//注意0个人的情况
            cout << 0 << endl;
        else {
            n++;
            if (n % 2)
                cout << n << endl;
            else
                cout << n / 2 << endl;
        }
    }
    return 0;
}

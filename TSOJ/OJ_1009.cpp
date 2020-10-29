//
// Created by WGP on 2019/10/18 at 22:44.
//
#include <iostream>
#include <cmath>

using namespace std;

bool fun(int n) {
    bool flag = true;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) {
            flag = false;
            break;
        }
    }
    return flag;
}

int main() {
    int n;
    while (cin >> n) {
        int sum = 0;
        for (int i = 2; i < n; i++) {
            if (fun(i)) {
                sum += i;
            }
        }
        cout << sum << endl;
    }
    return 0;
}

//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>

using namespace std;

int main() {
    int n, t = 1;
    cin >> n;
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n + 1 - i; ++j) {
            if (t < 10)
                cout << 0 << t++;
            else
                cout << t++;
        }
        cout << endl;
    }
    return 0;
}
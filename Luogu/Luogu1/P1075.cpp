//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>

using namespace std;


int main() {
    int n;
    cin >> n;
    for (int i = 2; i <= n; ++i) {
        if (n % i == 0) {
            cout << n / i;
            return 0;
        }
    }
    return 0;
}

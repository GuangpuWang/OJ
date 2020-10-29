//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>

using namespace std;

int main() {
    int n, num = 0;
    cin >> n;
    while (n >= 1) {
        num++;
        n /= 2;
    }
    cout << num;
    return 0;
}

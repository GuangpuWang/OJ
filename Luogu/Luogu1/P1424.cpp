//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>

using namespace std;

int main() {
    int x, n;
    cin >> x >> n;
    int week = n / 7, day = n % 7;
    int l = 0;
    l = week * 5 * 250;
    for (int i = 1; i <= day; i++)
        if ((x + i - 1) % 7 <= 5 && (x + i - 1) % 7 >= 1)
            l += 250;
    cout << l;
    return 0;
}

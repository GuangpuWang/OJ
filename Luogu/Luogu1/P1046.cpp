//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>

using namespace std;

int main() {
    int a[10], h, cnt = 0;
    for (int i = 0; i < 10; i++)
        cin >> a[i];
    cin >> h;
    for (int i = 0; i < 10; i++)
        if (a[i] <= h + 30)
            cnt++;
    cout << cnt;
    return 0;
}
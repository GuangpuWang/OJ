//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[5];
    cin >> a[0] >> a[1] >> a[2];
    sort(a, a + 3);
    cout << a[0] << " " << a[1] << " " << a[2];
}

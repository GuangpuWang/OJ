//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[5];
    cin >> a[0] >> a[1] >> a[2];
    string b;
    cin >> b;
    sort(a, a + 3);
    for (int i = 0; i < b.length(); i++)
        cout << a[b[i] - 'A'] << " ";
    return 0;
}
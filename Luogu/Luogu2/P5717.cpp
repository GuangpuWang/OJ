//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int a[4];
    cin >> a[1] >> a[2] >> a[3];
    sort(a + 1, a + 4);
    if (a[1] + a[2] <= a[3])
        cout << "Not triangle\n";
    else {
        if (a[1] * a[1] + a[2] * a[2] == a[3] * a[3])
            cout << "Right triangle\n";
        else if (a[1] * a[1] + a[2] * a[2] > a[3] * a[3])
            cout << "Acute triangle\n";
        else if (a[1] * a[1] + a[2] * a[2] < a[3] * a[3])
            cout << "Obtuse triangle\n";
        if (a[1] == a[2] || a[2] == a[3])//等边三角形也是等腰三角形
            cout << "Isosceles triangle\n";
        if (a[1] == a[2] && a[2] == a[3])
            cout << "Equilateral triangle\n";
    }
    return 0;
}
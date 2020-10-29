//
// Created by WGP on 2020/3/23.
//
#include <iostream>
#include <cmath>
#include <stdio.h>

using namespace std;

int main() {
    double a, b, c, p;
    cin >> a >> b >> c;
    p = 0.5 * (a + b + c);
    double s = sqrt(p * (p - a) * (p - b) * (p - c));
    s = s * 10;
    int ans = floor(s + 0.5);
    double answer = ans * 1.0 / 10;
    printf("%.1f", answer);
    return 0;
}
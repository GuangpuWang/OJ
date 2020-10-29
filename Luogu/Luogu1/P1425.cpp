//
// Created by WGP on 2020/3/23.
//
#include <iostream>

using namespace std;

int main() {
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    int start = a * 60 + b, end = c * 60 + d;
    int time = end - start;
    cout << time / 60 << " " << time % 60;
    return 0;
}
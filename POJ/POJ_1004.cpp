//
// Created by WGP on 2019/7/30 at 17:59.
//
#include <iostream>

using namespace std;
const int N = 12;

int main() {
    double money[N];
    double sum = 0.00;
    for (double &i : money) {//系统更改成这样
        cin >> i;
        sum += i;
    }
    cout << "$" << sum / 12 << endl;
    return 0;
}

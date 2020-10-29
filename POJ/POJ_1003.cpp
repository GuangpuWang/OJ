//
// Created by WGP on 2019/7/30 at 17:47.
//
#include <iostream>

using namespace std;

int main() {
    double a;
    cin >> a;
    while (a != 0.00) {
        double sum = 0.0;
        int i = 1;
        while (sum <= a) {

            sum += 1.0 / ++i;//*************
        }
        cout << i - 1 <<" card(s)"<< endl;
        cin >> a;
    }
    return 0;
}

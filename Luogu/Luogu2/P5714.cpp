//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>

using namespace std;

int main() {
    double m, h;
    cin >> m >> h;
    double t = m / h / h;
    if (t < 18.5)
        cout << "Underweight";
    else if (t >= 18.5 && t < 24) {
        cout << "Normal";
    } else {
        cout << t << endl << "Overweight";
    }
    return 0;
}

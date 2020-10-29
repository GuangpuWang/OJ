//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>

using namespace std;

int main() {
    string a;
    cin >> a;
    int n = 1, sum = 0;
    for (int i = 0; i < a.length() - 2; i++) {
        if (a[i] >= '0' && a[i] <= '9') {
            sum += n * (a[i] - '0');
            n++;
        }
    }
    sum = sum % 11;
    if (sum == 10) {
        if (a[a.length() - 1] == 'X')
            cout << "Right";
        else
            cout << a.substr(0, a.length() - 1) + 'X';
    } else {
        if ((a[a.length() - 1] - '0') == sum)
            cout << "Right";
        else
            cout << a.substr(0, a.length() - 1) + char(sum + 48);
    }
    return 0;
}
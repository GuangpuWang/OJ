//
// Created by GuangpuWang on 2020.3.24.
//
#include <iostream>

using namespace std;

int main() {
    int year, month, day2 = 0;
    cin >> year >> month;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        day2 = 1;
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
        cout << 31;
    else if (month == 2)
        cout << 28 + day2;
    else
        cout << 30;
    return 0;
}
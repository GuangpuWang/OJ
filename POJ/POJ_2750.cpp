//
// Created by WGP on 2019/7/31 at 11:36.
//
#include <iostream>

using namespace std;

int main() {
    int feet;
    while (cin >> feet) {
        if (feet % 2 != 0) {
            cout << "0 0" << endl;//脚的个数是奇数，肯定不行
        } else {//脚的个数为偶数
            int max = feet / 2;//最多全是鸡
            int min = feet / 4 + (feet % 4) / 2;//最少全是兔，可能有鸡
            cout << min << " " << max << endl;
        }
    }
    return 0;
}
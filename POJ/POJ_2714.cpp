//
// Created by WGP on 2019/8/1 at 14:30.
//
#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int num;
    while (cin >> num) {
        int stu[num];
        int sum = 0;
        for (int i = 0; i < num; i++) {
            cin >> stu[i];
            sum += stu[i];
        }
        cout << setiosflags(ios_base::fixed);//不需要科学格式
        cout << setprecision(2) << sum / (num * 1.0) << endl;//设置小数点后2位
    }
    return 0;
}

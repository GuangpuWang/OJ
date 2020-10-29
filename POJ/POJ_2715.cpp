//
// Created by WGP on 2019/8/2 at 14:10.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int num;
    cin >> num;
    int money[num];
    memset(money, 0, sizeof(money));
    int max = 0;
    string max_name;
    for (int i = 0; i < num; i++) {
        string name;
        int cj1, cj2;
        char ch1, ch2;
        int article;
        cin >> name >> cj1 >> cj2 >> ch1 >> ch2 >> article;

        //判断获奖情况
        if (cj1 > 80 && article > 0) {
            money[i] += 8000;
        }
        if (cj1 > 85 && cj2 > 80) {
            money[i] += 4000;
        }
        if (cj1 > 90) {
            money[i] += 2000;
        }
        if (cj1 > 85 && ch2 == 'Y') {
            money[i] += 1000;
        }
        if (cj2 > 80 && ch1 == 'Y') {
            money[i] += 850;
        }
        //比较大小，并记录
        if (max < money[i]) {
            max_name = name;
            max = money[i];
        }
    }
    int sum = 0;
    for (int i = 0; i < num; i++) {
        sum += money[i];
    }
    cout << max_name << endl << max << endl << sum << endl;
    return 0;
}

//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>

using namespace std;
const int MAX = 0x7fffffff;

int f(int n) {
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0)
            return 0;
    return 1;
}

int main() {
    int L, cnt = 0, i = 2, sum = 0;
    cin >> L;
    if (L == 1) {
        cout << 0;
        return 0;
    }
    while (i <= MAX) {
        if (sum + i > L)
            break;
        if (f(i) == 1) {
            cout << i << endl;
            sum += i;
            cnt++;
        }
        i++;
    }
    cout << cnt;
    return 0;
}
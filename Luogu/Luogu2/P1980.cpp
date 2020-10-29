//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>

using namespace std;

int main() {
    int n, x, count = 0;
    cin >> n >> x;
    for (int i = 1; i <= n; i++) {
        int t = i;
        while (t) {
            int temp = t % 10;
            if (temp == x)
                count++;
            t /= 10;
        }
    }
    cout << count;
    return 0;
}

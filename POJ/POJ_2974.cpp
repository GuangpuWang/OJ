//
// Created by WGP on 2019/8/4 at 15:08.
//
#include <iostream>
#include <cstdlib>
#include <cstring>

using namespace std;
const int N = 8;

int compare(const void *elem1, const void *elem2) {
    return (strcmp((char *) elem1, (char *) elem2));
}

int main() {
    int num;
    cin >> num;
    string a[num], b[num];
    for (int i = 0; i < num; i++) {
        cin >> a[i];
        //将字母全都转化为对应的数字
        for (int j = 0; j < a[i].length(); j++) {
            if (a[i][j] >= 'A' && a[i][j] <= 'Q') {
                a[i][j] = (a[i][j] - 'A' + 6) / 3 + '0';
            }
            if (a[i][j] >= 'R' && a[i][j] <= 'Z') {
                a[i][j] = (a[i][j] - 'A' + 5) / 3 + '0';
            }
        }

        //格式化
        int k = 0;
        for (int j = 0; j < a[i].length(); j++) {
            if (a[i][j] != '-') {
                b[i][k++] = a[i][j];
            }
            if (k == 3) {
                b[i][k] = '-';
                k++;
            }
        }
    }
    qsort(b, num, N, compare);
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < N; j++) {
            cout << b[i][j];
        }
        cout << endl;
    }
    return 0;
}
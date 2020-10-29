//
// Created by WGP on 2019/8/1 at 15:50.
//
#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int array[n][n];
    int flag = 0, ai = 0, aj = 0, bi = 0, bj = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> array[i][j];
            if (array[i][j] == 0 && flag == 0) {//标志首尾两个0的坐标
                ai = i;
                aj = j;
                flag = 1;
            }
            if (array[i][j] == 0) {
                bi = i;
                bj = j;
            }
        }
    }
    cout << (bi - ai - 1) * (bj - aj - 1) << endl;
    return 0;
}

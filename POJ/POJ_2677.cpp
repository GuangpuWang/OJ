//
// Created by WGP on 2019/8/1 at 17:22.
//
#include <iostream>

using namespace std;
int a[110][110];

int main() {
    int n;
    cin >> n;
    int area = 0, len = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
            if (a[i][j] <= 50) {
                area++;
                if (i == 0 || i == n - 1 || j == 0 || j == n - 1) {//考虑边界情况
                    len++;
                }
            }
        }
    }
    for (int i = 1; i < n - 1; i++) {//不考虑边界
        for (int j = 1; j < n - 1; j++) {
            if (a[i][j] <= 50 && (a[i - 1][j] > 50 || a[i + 1][j] > 50 || a[i][j - 1] > 50 || a[i][j + 1] > 50)) {
                len++;
            }
        }
    }
    cout << area << " " << len << endl;
    return 0;
}

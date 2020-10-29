//
// Created by WGP on 2019/10/19 at 20:30.
//
#include <iostream>

using namespace std;
int a[100][100], b[100][100];
int m, n;

int skating(int i, int j) {
    if (b[i][j] != -1)
        return b[i][j];
    int max = 0;
    if (i > 0 && a[i][j] > a[i - 1][j] && max < skating(i - 1, j))
        max = skating(i - 1, j);
    if (i < m - 1 && a[i][j] > a[i + 1][j] && max < skating(i + 1, j))
        max = skating(i + 1, j);
    if (j > 0 && a[i][j] > a[i][j - 1] && max < skating(i, j - 1))
        max = skating(i, j - 1);
    if (j < n - 1 && a[i][j] > a[i][j + 1] && max < skating(i, j + 1))
        max = skating(i, j + 1);
    b[i][j] = max + 1;
    return b[i][j];
}

int main() {
    cin >> m >> n;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            b[i][j] = -1;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            b[i][j] = skating(i, j);
    int max = 0;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (max < b[i][j])
                max = b[i][j];
    cout << max << endl;
    return 0;
}
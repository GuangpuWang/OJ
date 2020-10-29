//
// Created by GuangpuWang on 2020/4/13.
//
#include<bits/stdc++.h>

using namespace std;
long long int a, b, c, ans[25][25][25], flag[25][25][25];

long long int f(long long int a, long long int b, long long int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 1;
    } else if (a > 20 || b > 20 || c > 20) {
        return f(20, 20, 20);
    } else if (ans[a][b][c] == 0) {
        if (a < b && b < c) {
            ans[a][b][c] = f(a, b, c - 1) + f(a, b - 1, c - 1) - f(a, b - 1, c);
        } else {
            ans[a][b][c] = f(a - 1, b, c) + f(a - 1, b - 1, c) + f(a - 1, b, c - 1) - f(a - 1, b - 1, c - 1);
        }
        return ans[a][b][c];
    } else
        return ans[a][b][c];
}

int main() {
    while (scanf("%lld %lld %lld", &a, &b, &c) != EOF) {
        if (a == -1 && b == -1 && c == -1)
            break;
        cout << "w(" << a << ", " << b << ", " << c << ") = ";
        printf("%lld\n", f(a, b, c));
    }
    return 0;
}

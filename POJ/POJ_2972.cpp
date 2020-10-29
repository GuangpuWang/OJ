//
// Created by WGP on 2019/8/3 at 11:18.
//
#include <iostream>

using namespace std;

long fun(string a, int b) {//将每个数转化为10进制数
    int len = a.length();
    long result = 0;
    int t = 1;
    for (int i = len - 1; i >= 0; i--) {
        if (int(a[i] - '0') >= b) return -1;//b进制数字不能大于等于b
        result += (a[i] - '0') * t;
        t *= b;
    }
    return long(result);
}

int main() {
    string p, q, r;
    cin >> p >> q >> r;
    long pp, qq, rr;
    int i;
    for (i = 2; i <= 16; i++) {
        pp = fun(p, i);
        qq = fun(q, i);
        rr = fun(r, i);
        if (pp == -1 || qq == -1 || rr == -1) continue;
        if (pp * qq == rr) {
            cout << i << endl;
            break;
        }
    }
    if (i == 17) {
        cout << "0" << endl;
    }
    return 0;
}

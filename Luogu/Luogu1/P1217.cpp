//
// Created by GuangpuWang on 2020/3/31.
//
#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;
bool book[100000001];

// 用埃氏筛法生成质数表
void prime(int b) {
    //初始化，默认全部都是质数
    memset(book, true, sizeof(book));
    book[1] = false;            //1不是质数
    int n = sqrt(b);
    for (int i = 2; i <= n; i++) {
        if (book[i]) {
            //质数的倍数绝对不是质数，把所有质数的倍数全部设为false
            for (int j = 2; j <= b / i; j++)
                book[i * j] = false;  // i*j<=b
        }
    }
}

bool f(int n) {
    int t1 = n, t2 = 0;
    while (n) {
        t2 = t2 * 10 + n % 10;
        n /= 10;
    }
    return t1 == t2;
}

int main() {
    int a, b;
    cin >> a >> b;
    if (b >= 10000000)//除了11以外，一个数的位数是偶数的话，不可能为回文数素数。
        b = 9999999;
    prime(b);
    if (a % 2 == 0)      //a>=5,此时a为偶数，必定不是质数
        a++;
    for (int i = a; i <= b; i++) {
        if (book[i] && f(i))
            cout << i << endl;
    }
    return 0;
}

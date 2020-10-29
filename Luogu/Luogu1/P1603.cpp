//
// Created by GuangpuWang on 2020/4/3.
//
#include <bits/stdc++.h>

using namespace std;
int num[10], n = 0;

int main() {
    string a, ans;
    for (int i = 1; i <= 6; i++) {
        cin >> a;
        if (a == "zero")
            num[n++] = 0;
        if (a == "one" || a == "a" || a == "first" || a == "another")
            num[n++] = 1;
        if (a == "two" || a == "both" || a == "second")
            num[n++] = 4;
        if (a == "three" || a == "third")
            num[n++] = 9;
        if (a == "four")
            num[n++] = 16;
        if (a == "five")
            num[n++] = 25;
        if (a == "six")
            num[n++] = 36;
        if (a == "seven")
            num[n++] = 49;
        if (a == "eight")
            num[n++] = 64;
        if (a == "nine")
            num[n++] = 81;
        if (a == "ten")
            num[n++] = 0;
        if (a == "eleven")
            num[n++] = 21;
        if (a == "twelve")
            num[n++] = 44;
        if (a == "thirteen")
            num[n++] = 69;
        if (a == "fourteen")
            num[n++] = 96;
        if (a == "fifteen")
            num[n++] = 25;
        if (a == "sixteen")
            num[n++] = 56;
        if (a == "seventeen")
            num[n++] = 89;
        if (a == "eighteen")
            num[n++] = 24;
        if (a == "nineteen")
            num[n++] = 61;
        if (a == "twenty")
            num[n++] = 0;
    }
    cin >> a;
    sort(num, num + n);
    long long int result = 0;
    for (long long int i = 0; i < n; i++) {
        result = result * 100 + num[i];
    }
    cout << result;
    return 0;
}

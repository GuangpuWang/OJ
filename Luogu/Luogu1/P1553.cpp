//
// Created by GuangpuWang on 2020/4/3.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;
    long long int xiaoshu = a.find('.');
    long long int fenshu = a.find('/');
    long long int baifenshu = a.find('%');
    if (xiaoshu == -1 && fenshu == -1 && baifenshu == -1) {
        long long int t = 0;
        for (long long int i = a.length() - 1; i >= 0; i--)
            t = t * 10 + a[i] - '0';
        cout << t;
    } else if (xiaoshu != -1) {
        long long int left = 0, right = 0;
        for (long long int i = xiaoshu - 1; i >= 0; i--)
            left = left * 10 + a[i] - '0';
        for (long long int i = a.length() - 1; i >= xiaoshu + 1; i--)
            right = right * 10 + a[i] - '0';
        if (right!=0){
            while(right%10==0){
                right/=10;
            }
        }
        cout << left << "." << right;
    } else if (fenshu != -1) {
        long long int fenzi = 0, fenmu = 0;
        for (long long int i = fenshu - 1; i >= 0; i--)
            fenzi = fenzi * 10 + a[i] - '0';
        for (long long int i = a.length() - 1; i >= fenshu + 1; i--)
            fenmu = fenmu * 10 + a[i] - '0';
        cout << fenzi << "/" << fenmu;
    } else if (baifenshu != -1) {
        long long int t = 0;
        for (long long int i = baifenshu - 1; i >= 0; i--)
            t = t * 10 + a[i] - '0';
        cout << t << "%";
    }
    return 0;
}

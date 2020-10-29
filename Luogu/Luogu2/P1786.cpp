//
// Created by GuangpuWang on 2020/4/6.
//
#include <bits/stdc++.h>

using namespace std;
struct BangPai {
    string name, zhiwei;
    long long int banggong;
    int dengji, xuhao;
} a[120];
int n;

int zhiwei(string a) {
    if (a == "BangZhu") return 0;
    if (a == "FuBangZhu") return 1;
    if (a == "HuFa") return 2;
    if (a == "ZhangLao") return 3;
    if (a == "TangZhu") return 4;
    if (a == "JingYing") return 5;
    if (a == "BangZhong") return 6;
}

int cmp1(BangPai a, BangPai b) {
    if (a.banggong != b.banggong)
        return a.banggong > b.banggong;
    else
        return a.xuhao < b.xuhao;
}

int cmp2(BangPai a, BangPai b) {
    if (a.zhiwei == b.zhiwei) {
        if (a.dengji == b.dengji)
            return a.xuhao < b.xuhao;
        else
            return a.dengji > b.dengji;
    } else {
        return zhiwei(a.zhiwei) < zhiwei(b.zhiwei);
    }
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i].name >> a[i].zhiwei >> a[i].banggong >> a[i].dengji;
        a[i].xuhao = i;
    }
    sort(a + 4, a + n + 1, cmp1);
    for (int i = 4; i <= n; i++) {
        if (i >= 4 && i <= 5)
            a[i].zhiwei = "HuFa";
        else if (i >= 6 && i <= 9)
            a[i].zhiwei = "ZhangLao";
        else if (i >= 10 && i <= 16)
            a[i].zhiwei = "TangZhu";
        else if (i >= 17 && i <= 41)
            a[i].zhiwei = "JingYing";
        else
            a[i].zhiwei = "BangZhong";
    }
    sort(a+1,a+n+1,cmp2);
    for (int i = 1; i <= n; ++i) {
        cout << a[i].name << " " << a[i].zhiwei << " " << a[i].dengji << endl;
    }
    return 0;
}

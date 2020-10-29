//
// Created by GuangpuWang on 2020/4/2.
//
#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    getchar();
    string a[n];
    char c;//运算符
    int flag;

    for (int i = 0; i < n; i++) {
        getline(cin, a[i]);
        string b[5];
        int num = 0;
        for (int j = 0; j < a[i].length(); j++)
            if (a[i][j] != ' ')
                b[num] = b[num] + a[i][j];
            else
                num++;
        if (b[0][0] == 'a' || b[0][0] == 'b' || b[0][0] == 'c') {
            c = b[0][0];
            flag = 1;
        } else {
            flag = 0;
        }
        int t1 = 0, t2 = 0, result = 0;
        for (int j = 0; j < b[flag].length(); j++)
            t1 = t1 * 10 + b[flag][j] - '0';
        for (int j = 0; j < b[flag + 1].length(); j++)
            t2 = t2 * 10 + b[flag + 1][j] - '0';
        string ans = b[flag], t;
        if (c == 'a') {
            result = t1 + t2;
            ans = ans + '+';
        } else if (c == 'b') {
            result = t1 - t2;
            ans = ans + '-';
        } else {
            result = t1 * t2;
            ans = ans + '*';
        }
        ans = ans + b[flag + 1] + '=';
        if (result < 0) {
            ans = ans + '-';
            result = -1 * result;
        } else if (result == 0)
            ans = ans + '0';
        while (result) {
            t = char(result % 10 + 48) + t;
            result /= 10;
        }
        ans = ans + t;
        cout << ans << endl << ans.length();
        if (i < n - 1)
            cout << endl;
    }
    return 0;
}
/*
#include<bits/stdc++.h>

using namespace std;
string sa, sb;
int a, b;
int n, Type;
char ch;

int Length(int a)//计算数的长度
{
    int ans = 0;
    if (a < 0 || a == 0) ans++;//0或负数特判
    while (a) {
        ans++;
        a /= 10;
    }//经典处理
    return ans;
}

int Change(string s)//将字符串转换为数，没什么好多说的
{
    int ans = 0;
    for (int i = 0; i < s.size(); i++) ans = ans * 10 + s[i] - 48;
    return ans;
}

int Ten(int a)//计算a的10次方，可以用pow代替
{
    int ans = 1;
    for (int i = 1; i <= a; i++) ans *= 10;
    return ans;
}

int main() {
    cin >> n;
    for (int i = 1; i <= n; i++) {
        int tot = 0;
        cin >> ch >> sa >> sb;//输入一个字符两个字符串
        if (ch == 'a') Type = 1;
        else if (ch == 'b') Type = 2;
        else if (ch == 'c') Type = 3;//判断类型
        else if (ch >= '0' && ch <= '9') sa = ch + sa;//如果不是字母那么加到第一个数的最前面
        a = Change(sa), b = Change(sb);//转换为数
        int lena = Length(a), lenb = Length(b);//计算长度
        if (Type == 1) printf("%d+%d=%d\n%d", a, b, a + b, lena + lenb + 2 + Length(a + b));
        else if (Type == 2) printf("%d-%d=%d\n%d", a, b, a - b, lena + lenb + 2 + Length(a - b));
        else if (Type == 3) printf("%d*%d=%d\n%d", a, b, a * b, lena + lenb + 2 + Length(a * b));//输出即可
        if (i < n) cout << endl;//别忘了判断，多输换行很可能bao0（至少我bao0了）
    }
    return 0;//结束~
}


 */
//
// Created by GuangpuWang on 2020/4/6.
//
#include <bits/stdc++.h>

using namespace std;
int p1, p2, p3;
string s;

int main() {
    cin >> p1 >> p2 >> p3;
    cin >> s;
    cout << s[0];
    for (int i = 1; i < s.length(); ++i) {
        if (s[i] == '-') {
            if(s[i+1]=='-'||s[i-1]=='-')
                cout<<"-";
            else if (s[i + 1] - s[i - 1] == 1)
                s[i] = ' ';
            else if (s[i + 1] - s[i - 1] <= 0)
                cout << "-";
            else if ((s[i - 1] <= '9' && s[i + 1] >= 'a') || (s[i - 1] >= 'a' && s[i + 1] <= '9'))
                cout << "-";
            else {
                if (s[i - 1] >= 'a' && s[i - 1] <= 'z' && s[i + 1] >= 'a' && s[i + 1] <= 'z') {   //字母
                    if (p3 == 1) {  //顺序
                        for (int j = s[i - 1] + 1; j <= s[i + 1] - 1; ++j)
                            for (int k = 1; k <= p2; ++k)
                                if (p1 == 1)
                                    cout << char(j);
                                else if (p1 == 2)
                                    cout << char(j - 32);
                                else
                                    cout << "*";
                    } else {      //逆序
                        for (int j = s[i + 1] - 1; j >= s[i - 1] + 1; --j)
                            for (int k = 1; k <= p2; ++k)
                                if (p1 == 1)
                                    cout << char(j);
                                else if (p1 == 2)
                                    cout << char(j - 32);
                                else
                                    cout << "*";
                    }
                } else {                //数字
                    if (p3 == 1) {  //顺序
                        for (int j = s[i - 1] + 1; j <= s[i + 1] - 1; ++j)
                            for (int k = 1; k <= p2; ++k)
                                if (p1 != 3)
                                    cout << char(j);
                                else
                                    cout << "*";
                    } else {      //逆序
                        for (int j = s[i + 1] - 1; j >= s[i - 1] + 1; --j)
                            for (int k = 1; k <= p2; ++k)
                                if (p1 != 3)
                                    cout << char(j);
                                else
                                    cout << "*";
                    }
                }
            }
        } else
            cout << s[i];
    }
    return 0;
}

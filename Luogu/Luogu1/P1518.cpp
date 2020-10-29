//
// Created by GuangpuWang on 2020/4/5.
//
#include <bits/stdc++.h>

using namespace std;
char s[12][12];

int main() {
    int cx = 0, cy = 0, fx = 0, fy = 0;
    for (int i = 0; i < 10; ++i)
        for (int j = 0; j < 10; ++j) {
            cin >> s[i][j];
            if (s[i][j] == 'C') {
                cx = i;             // C 初始坐标
                cy = j;
            }
            if (s[i][j] == 'F') {
                fx = i;             // F 初始坐标
                fy = j;
            }
        }
    int time = 0, flag1 = 1, flag2 = 1;
    while (true) {
        if (cx == fx && cy == fy) {
            cout << time;
            return 0;
        }
        if (flag1 == 1)
            if (s[cx - 1][cy] != '*' && cx - 1 >= 0)
                cx--;
            else
                flag1 = 2;
        else if (flag1 == 2)
            if (s[cx][cy + 1] != '*' && cy + 1 < 10)
                cy++;
            else
                flag1 = 3;
        else if (flag1 == 3)
            if (s[cx + 1][cy] != '*' && cx + 1 < 10)
                cx++;
            else
                flag1 = 4;
        else if (flag1 == 4)
            if (s[cx][cy - 1] != '*' && cy - 1 >= 0)
                cy--;
            else
                flag1 = 1;

        if (flag2 == 1)
            if (s[fx - 1][fy] != '*' && fx - 1 >= 0)
                fx--;
            else
                flag2 = 2;
        else if (flag2 == 2)
            if (s[fx][fy + 1] != '*' && fy + 1 < 10)
                fy++;
            else
                flag2 = 3;
        else if (flag2 == 3)
            if (s[fx + 1][fy] != '*' && fx + 1 < 10)
                fx++;
            else
                flag2 = 4;
        else if (flag2 == 4)
            if (s[fx][fy - 1] != '*' && fy - 1 >= 0)
                fy--;
            else
                flag2 = 1;
        time++;
        if (time > 100000) {
            cout << 0;
            return 0;
        }
    }
    return 0;
}

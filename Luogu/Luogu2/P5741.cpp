//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;
struct Stu {
    string name;
    int chinese;
    int math;
    int english;
    int sum;
};
Stu s[1010];

int main() {
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> s[i].name >> s[i].chinese >> s[i].math >> s[i].english;
        s[i].sum = s[i].chinese + s[i].math + s[i].english;
    }
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            if (abs(s[i].chinese - s[j].chinese) <= 5 && abs(s[i].math - s[j].math) <= 5
                && abs(s[i].english - s[j].english) <= 5 && abs(s[i].sum - s[j].sum) <= 10)
                cout << s[i].name << " " << s[j].name << endl;
        }
    }
    return 0;
}


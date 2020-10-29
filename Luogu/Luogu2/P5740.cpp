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
Stu s;

int main() {
    int n;
    cin >> n;
    Stu max;
    max.sum = 0;
    while (n--) {
        cin >> s.name >> s.chinese >> s.math >> s.english;
        s.sum = s.chinese + s.math + s.english;
        if (max.sum < s.sum) {
            max.name = s.name;
            max.chinese = s.chinese;
            max.math = s.math;
            max.english = s.english;
            max.sum = s.sum;
        }
    }
    cout << max.name << " " << max.chinese << " " << max.math << " " << max.english;
    return 0;
}

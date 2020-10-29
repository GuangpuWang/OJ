//
// Created by GuangpuWang on 2020/4/4.
//
#include <bits/stdc++.h>

using namespace std;
struct Stu {
    string name;
    int age;
    int grade;
};

void f(Stu a) {
    if (a.grade * 1.2 > 600)
        a.grade = 600;
    else
        a.grade = a.grade * 1.2;
    cout << a.name << " " << a.age+1 << " " << a.grade<<endl;
}

int main() {
    int n;
    cin >> n;
    Stu s[n + 10];
    for (int i = 1; i <= n; ++i) {
        cin >> s[i].name >> s[i].age >> s[i].grade;
    }
    for (int i = 1; i <= n; ++i) {
        f(s[i]);
    }
    return 0;
}

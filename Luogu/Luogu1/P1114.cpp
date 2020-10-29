//
// Created by WGP on 2019/11/11 at 0:21.
//前缀和
#include <iostream>

using namespace std;
int sum[100020];

int main() {
    int n;
    cin >> n;
    int stu;
    for (int i = 1; i <= n; i++) {
        cin >> stu;
        sum[i] = sum[i - 1] + stu;//前缀和
    }
    int t = n;
    if (n % 2)//被选出的人数一定是偶数
        n--;
    for (int i = n; i >= 2; i -= 2)//i表示有i个学生被选出，所以i是偶数
        for (int j = 0; j <= t - i/*重要*/; j++)//重要
            if (sum[i + j] - sum[j] == i / 2) {//男生占一半
                cout << i << endl;
                return 0;
            }
    cout << 0 << endl;
    return 0;
}
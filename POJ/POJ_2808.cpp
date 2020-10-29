//
// Created by WGP on 2019/7/31 at 17:17.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int len, num;
    cin >> len >> num;
    int roads[len + 1];
    memset(roads, 0, sizeof(roads));//memset将数组置0
    for (int i = 0; i < num; i++) {
        int begin, end;
        cin >> begin >> end;
        for (int j = begin; j <= end; j++) {
            roads[j] = 1;//将移走的树标为1
        }
    }
    int sum = 0;
    for (int i = 0; i < len + 1; i++) {
        if (roads[i] == 0) {//数组中0的个数就是树的棵数
            sum += 1;
        }
    }
    cout << sum << endl;
    return 0;
}

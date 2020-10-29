//
// Created by GuangpuWang on 2020/4/6.
//
#include <bits/stdc++.h>

using namespace std;

int m, n, ans = 0, s = 0;
int queues[420][25], num[420];      //表示安排顺序
int machine[25][25];                //每个工序所需的机器
int times[25][25];                  //每个工序所需的时间
int isfree[25][420];                //记录 i 号机器第 j 分钟的状态（ 是否空闲 ）
int lasttime[25];                   //记录工件当前所用的最晚时间
int main() {
    cin >> m >> n;
    for (int i = 1; i <= m * n; ++i) {
        cin >> queues[i][1];
        queues[i][2] = ++num[queues[i][1]];  //将简写的安排顺序写成完整格式
    }
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> machine[i][j];
    for (int i = 1; i <= n; ++i)
        for (int j = 1; j <= m; ++j)
            cin >> times[i][j];
    for (int i = 1; i <= m * n; ++i) {
        for (int j = lasttime[queues[i][1]] + 1;; ++j) {
            if (isfree[machine[queues[i][1]][queues[i][2]]][j] == 0)//查看机器是否空闲
                s++;
            else
                s = 0;
            if (s == times[queues[i][1]][queues[i][2]]) {           //机器空闲
                for (int k = j - s + 1; k <= j; ++k)
                    isfree[machine[queues[i][1]][queues[i][2]]][k] = 1;//这段时间工作
                lasttime[queues[i][1]] = j;  //更新最晚时间
                s = 0;
                break;
            }
        }
    }
    for (int i = 1; i <= n; i++)
        ans = max(ans, lasttime[i]);    //  总时间即为某工件的最晚时间
    cout << ans;
    return 0;
}

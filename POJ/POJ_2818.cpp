//
// Created by WGP on 2019/8/2 at 15:32.
//如果一直循环的话，会超时。所以要找到循环的周期，减少循环次数。
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int num;
    while (cin >> num && num != 0) {
        int a[num], b[num];
        for (int i = 0; i < num; i++) {
            cin >> a[i];
        }
        memset(b, 0, sizeof(b));//b数组用于存储每一个数组元素要循环的周期
        for (int i = 0; i < num; i++) {
            int j = a[i] - 1;
            while (true) {
                if (a[j] != a[i]) {
                    j = a[j] - 1;
                    b[i]++;
                } else {
                    b[i]++;
                    break;
                }
            }
        }
        int k;
        while (cin >> k && k != 0) {
            getchar();//去掉数字和字符串之间的空格
            string info, info1;
            getline(cin, info);
            for (int i = info.length(); i < num; i++) {
                info[i] = ' ';
            }//在字符串末尾补充空格
            for (int i = 0; i < num; i++) {//将数组元素单独循环，一个一个的进行
                int m = i;
                for (int j = 0; j < k % b[i]; j++) {//此时，循环k的余数次就可以得出答案了
                    m = a[m] - 1;
                }
                info1[m] = info[i];
            }
            info1[num] = '\0';
            for (int i = 0; i < num; i++) {
                cout << info1[i];
            }
            cout << endl;
        }
        cout << endl;
    }
    return 0;
}

//
// Created by WGP on 2019/7/31 at 14:12.
//
#include<iostream>
#include <cmath>

using namespace std;

int main() {
    int num;
    while (cin >> num) {
        for (int i = 0; i < num; i++) {
            string begin, end;
            cin >> begin >> end;
            int x = abs(begin[0] - end[0]);
            int y = abs(begin[1] - end[1]);

            if (x == 0 && y == 0) {
                cout << "0 0 0 0" << endl;
            } else {
                int wang = int(fmin(x, y) + abs(x - y));//��б�ߣ�ֱ��
                int hou = 1 + ((x == y || x == 0 || y == 0) ? 0 : 1);//��б�ɣ�ֱ��
                int che = 1 + ((x == 0 || y == 0) ? 0 : 1);//��ֱ��
                string xiang;//��б��
                if (abs(x - y) % 2 != 0) {
                    xiang = "Inf";
                } else if (x == y) {
                    xiang = "1";
                } else
                    xiang = "2";
                cout << wang << " " << hou << " " << che << " " << xiang << endl;
            }
        }
    }
    return 0;
}


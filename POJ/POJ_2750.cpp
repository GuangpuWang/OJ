//
// Created by WGP on 2019/7/31 at 11:36.
//
#include <iostream>

using namespace std;

int main() {
    int feet;
    while (cin >> feet) {
        if (feet % 2 != 0) {
            cout << "0 0" << endl;//�ŵĸ������������϶�����
        } else {//�ŵĸ���Ϊż��
            int max = feet / 2;//���ȫ�Ǽ�
            int min = feet / 4 + (feet % 4) / 2;//����ȫ���ã������м�
            cout << min << " " << max << endl;
        }
    }
    return 0;
}
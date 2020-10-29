//
// Created by WGP on 2019/8/2 at 11:06.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int num[26];//存储对应的字母
    memset(num, 0, sizeof(num));
    string str;
    for (int i = 0; i < 4; i++) {
        getline(cin, str);
        for (char j : str) {
            if (j >= 'A' && j <= 'Z') {
                num[j - 'A']++;//******
            }
        }
    }
    int max = 0;
    for (int i : num) {
        if (max < i) {
            max = i;
        }
    }
    //找到最大的数，逐渐减1
    int flag = max;
    for (int i = max; i > 0; i--) {
        for (int & j : num) {
            if (j < flag) {
                cout << " ";
            } else {
                cout << "*";
                j--;
            }
            cout << " ";
        }
        flag--;
        cout << endl;
    }
    cout << "A B C D E F G H I J K L M N O P Q R S T U V W X Y Z" << endl;
    return 0;
}

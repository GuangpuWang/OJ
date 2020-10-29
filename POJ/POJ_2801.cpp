//
// Created by WGP on 2019/7/31 at 17:39.
//
#include <iostream>
#include <cstring>

using namespace std;

int main() {
    int hang, lie, num;
    cin >> hang >> lie >> num;
    int alphabet[26];
    memset(alphabet, 0, sizeof(alphabet));//数组置0
    for (int i = 0; i < hang; i++) {
        string str;
        cin >> str;
        for (int j = 0; str[j] != '\0'; j++) {
            alphabet[str[j] - 'A']++;//统计每个字母出现的次数
        }
    }
    for (int i = 0; i < num; i++) {
        string str;
        cin >> str;
        for (int j = 0; str[j] != '\0'; j++) {
            alphabet[str[j] - 'A']--;//减去单词中出现的字母
        }
    }
    for (int i = 0; i < 26; i++) {
        if (alphabet[i] != 0) {//不是0的就是剩下的字母
            for (int j = 0; j < alphabet[i]; j++) {
                cout << char(i + 65);//转换类型
            }
        }
    }
    cout << endl;
    return 0;
}
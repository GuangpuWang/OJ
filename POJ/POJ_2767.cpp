//
// Created by WGP on 2019/8/2 at 14:41.
//
#include <iostream>

using namespace std;

int main() {
    string a;
    getline(cin, a);
    int len = a.length();
    for (int i = 0; i < len; i++) {
        //转换
        if (a[i] >= 'F' && a[i] <= 'Z') {
            a[i] = char(int(a[i]) - 5);
        }
        else if(a[i]>='A'&&a[i]<='E'){
            a[i]=char(int(a[i])+26-5);
        }
    }
    cout << a << endl;
    return 0;
}

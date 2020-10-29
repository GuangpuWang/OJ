//
// Created by WGP on 2019/8/1 at 15:04.
//
#include <iostream>
#include <algorithm>

using namespace std;
const int N = 15;

int main() {
    int array[N];
    int i = 0;
    while (true) {
        cin >> array[i];
        if (array[i] == 0) {
            break;
        }
        i++;
    }
    sort(array, array + i);//排序
    int num = 0;
    for (int j = 0; j < i; j++) {
        for (int k = 0; k < j; k++) {
            if (array[j] / array[k] == 2 && array[j] % array[k] == 0) {
                num++;
            }
        }
    }
    cout << num << endl;
    return 0;
}

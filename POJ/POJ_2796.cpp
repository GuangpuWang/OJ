//
// Created by WGP on 2019/8/1 at 14:58.
//
#include <iostream>

using namespace std;
const int N = 5;

int main() {
    int max;
    cin >> max;
    int array[N];
    int sum = 0;
    for (int & i : array) {
        cin >> i;
        if (i < max) {
            sum += i;
        }
    }
    cout << sum << endl;
    return 0;
}

//
// Created by WGP on 2019/7/30 at 18:13.
//
#include <iostream>
#include <cmath>

using namespace std;
const double PI = 3.141592653;

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        float x, y;
        cin >> x >> y;
        double len = sqrt(x * x + y * y);
        int j = 1;
        while (len > sqrt(50 * 2 * j / PI)) {
            j++;
        }
        cout << "Property " << i + 1 << ": This property will begin eroding in year " << j << "." << endl;
    }
    cout << "END OF OUTPUT." << endl;
    return 0;
}

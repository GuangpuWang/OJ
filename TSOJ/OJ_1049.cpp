#include<iostream>
#include<algorithm>
#include<iomanip>

using namespace std;

int main() {
    int a;
    while (cin >> a) {
        double x, y;
        cin >> x >> y;
        double sum = 0.0;
        sum += x + a % 3 * (int) (x + y) % 2 / 4;
        cout << fixed << setprecision(6) << sum << endl;
    }
    return 0;
}

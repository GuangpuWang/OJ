//
// Created by WGP on 2019/8/2 at 14:52.
//
#include <iostream>

using namespace std;

int main() {
    int num;
    cin >> num;
    for (int i = 0; i < num; i++) {
        string gender;
        cin >> gender;
        double a1, a2, a3, a4, a5;
        cin >> a1 >> a2 >> a3 >> a4 >> a5;
        int bad = 0;
        if (a1 < 4.0 || a1 > 10.0) {
            bad++;
        }
        if (a2 < 3.5 || a2 > 5.5) {
            bad++;
        }
        if (gender == "male" && (a3 < 120 || a3 > 160)) {
            bad++;
        }
        if (gender == "female" && (a3 < 110 || a3 > 150)) {
            bad++;
        }
        if (gender == "male" && (a4 < 42 || a4 > 48)) {
            bad++;
        }
        if (gender == "female" && (a4 < 36 || a4 > 40)) {
            bad++;
        }
        if (a5 < 100 || a5 > 300) {
            bad++;
        }
        if (bad == 0) {
            cout << "normal" << endl;
        } else
            cout << bad << endl;
    }
    return 0;
}

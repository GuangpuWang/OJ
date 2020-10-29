//
// Created by WGP on 2019/8/1 at 13:04.
//装箱问题，3*3最要注意，考虑个数为4的倍数，+1，+2，+3
#include <iostream>

using namespace std;

int main() {
    int num_one, num_two, num_three, num_four, num_five, num_six;
    cin >> num_one >> num_two >> num_three >> num_four >> num_five >> num_six;
    while (num_one != 0 || num_two != 0 || num_three != 0 || num_four != 0 || num_five != 0 || num_six != 0) {
        int num;
        num = num_six + num_five + num_four + (num_three + 3) / 4;//*****
        int array[4] = {0, 5, 3, 1};//**********
        int numtwo = 5 * num_four + array[num_three % 4];
        if (numtwo < num_two) {
            num += (num_two - numtwo + 8) / 9;
        }
        int numone = 36 * num - 36 * num_six - 25 * num_five - 16 * num_four - 9 * num_three - 4 * num_two;
        if (num_one > numone) {
            num += (num_one - numone + 35) / 36;
        }
        cout << num << endl;
        cin >> num_one >> num_two >> num_three >> num_four >> num_five >> num_six;
    }
    return 0;
}

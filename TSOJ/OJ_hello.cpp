#include <iostream>

using namespace std;

int N, A[10000], B[10000];

int main() {
    cin >> N;
    for (int i = 0; i < N; i++) {
        cin >> A[i];
    }

    B[0] = A[0];

    for (int i = 1; i < N; i++) {
        B[i] = B[i - 1] + A[i];
    }

    for (int i = 0; i < N; i++) {
        cout << B[i] << " ";
    }

    return 0;
}
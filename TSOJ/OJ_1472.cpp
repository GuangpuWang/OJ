#include<iostream>
#include<algorithm>

using namespace std;

char a[10000], b[10000];

int main() {
    while (cin >> a[0]) {
        int n = 1;
        while ((a[n++] = getchar()) != ' ');
        int k;
        cin >> k;
        int k1 = k;
        int i, t = 0, m = 0;
        int num;
        do {
            char max = -1;
            for (i = t; i <= k + t; ++i) {
                if (max < a[i]) {
                    max = a[i];
                    num = i;
                }
            }
            b[m] = a[num];
            k = k + t - num;
            m++;
            t = num + 1;
            if (t == n - k - 1) break;
        } while (k);
        for (; i < n; ++i)
            b[m++] = a[i];
        for (i = 0; i < n - k1 - 1; i++)
            cout << b[i];
        cout << endl;
    }
    return 0;
}

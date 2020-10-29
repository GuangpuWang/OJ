#include<iostream>
#include<string.h>
using namespace std;
const int N=85;

void fun(char s1[],char a[],int m) {
	int i,j;
	for (i = 0, j = 0; i < m; i++) {
        if (s1[i] != ' ') {
            if (s1[i] >= 'A' && s1[i] <= 'Z') {
                a[j++] = s1[i] + 32;
            } 
			else
                a[j++] = s1[i];
        }
    }
        a[j] = '\0';
}
int main() {
    int t,m,n;
    char aa[N], bb[N], a[N], b[N];
    cin >> t;
    getchar();
    while (t--) {
        gets(aa);
        gets(bb);
        m = strlen(aa);
        n = strlen(bb);
        fun(aa,a,m);
        fun(bb,b,n);
        if (strcmp(a, b) == 0) 
            cout << "YES" << endl;
         else 
            cout << "NO" << endl;
    }
    return 0;
}

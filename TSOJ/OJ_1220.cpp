#include <iostream>
#include <cmath>
using namespace std;
int ans[100][8], i, j, k, num, hang[8]={0};

void fun(int i) {
    if (i == 8) {
        for (j = 0; j < 8; j++) 
            ans[num][j] = hang[j] + 1;
        num++;
    }

    for (int j = 0; j < 8; j++) {
        for (k = 0; k < i; k++)
            if ((k-i) == hang[k]-j || (i-k) == hang[k] - j||hang[k] == j)
                break;
        if (k==i)
        {
            hang[i] = j;
            fun(i+1);
        }
    }
}

int main()
{
    int a[8][8] , b[8]={0},count = 0;
    for (int i= 0; i < 8; i++) 
        for (int j = 0; j < 8; j++) 
            cin>>a[i][j];
            
    for (int i = 0; i < 8; i++) 
        for (int j = 0; j < 8; j++) 
            if (a[i][j]) 
				b[i] =j + 1;
				
	num = 0;
    fun(0);
    for (int i = 0; i < 92; i++) 
        for (int j = 0; j < 8; j++) 
            if (b[j] == ans[i][j]) 
				count++;

    cout<<count<<endl;
    return 0;
}












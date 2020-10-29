#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;
double a[110];

void fun(double max) {
	if (max == 0) cout<<"No"<<endl;
    else cout<<fixed<<setprecision(3)<<max<<endl;
}
int main()
{
    for (int n; cin>>n;) {
        for (int i=0; i<n; i++) 
            cin>> a[i];
    	sort( a, a+n, greater<int>());//Ωµ–Ú≈≈¡– 
		double max=0;
		
        for (int i=0;i<n;i++) {
            for (int j=i+1;j<n;j++) {
                for (int k= i+2;k<n;k++) {
                    if (a[i]*a[i]==a[j]*a[j]+a[k]*a[k]&& max<(double)(a[j]*a[k]/2))
                        max = (double)(a[j]*a[k]/2);
                }
            }
        }
        fun(max);
    }
    return 0;
}

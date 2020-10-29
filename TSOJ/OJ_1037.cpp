/*整数求和

题目描述:
求出 n 个整数的和。

输入描述：
第一行为一个正整数 n (1 < n < 1000)，接下来 n 行每行一个整数。

输出描述：
一个正整数，为所有给定数的和。

样例输入:
4

1

2

3

4

样例输出:
10
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int n;
	while(cin>>n) {
		int sum=0,a[n];
		for(int i=0;i<n;i++) {
			cin>>a[i];
			sum+=a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}







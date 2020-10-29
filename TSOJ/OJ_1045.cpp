/*
题目描述:
给定10个正整数,每个正整数均小于10000，将其中的奇数求和并输出

输入描述：
输入为一行，包含10个正整数

输出描述：
输出为一行，为输入的正整数中所有奇数的和

样例输入:
1 2 3 4 5 6 7 8 9 10

样例输出:
25
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	while(1) {
		int a[10],sum=0;
		for(int i=0;i<10;i++) {
			cin>>a[i];
			if(a[i]%2)
				sum+=a[i];
		}
		cout<<sum<<endl;
	}
	return 0;
}

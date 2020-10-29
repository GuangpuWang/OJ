/*
题目描述:
两个整数相除，它们的商也是整数，如5/3，商为1。（每个整数的范围在-2000000000到2000000000之间）

输入描述：
有多组测试数据，每组测试数据占一行。每行输入两个整数，每个数之间用一个空格分开

输出描述：
一行，两个整数相除所得的商

样例输入:
7 3

样例输出:
2
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	int m;
	while(cin>>m) {
		int n;
		cin>>n;
		cout<<m/n<<endl;
	}
	return 0;
}

/*
题目描述:
给定由若干个单词组成的字符串，字符串的长度小于 500，单词和单词之间由空格分开，
求出其中的最长最短单词

输入描述：
长度小于 500 的字符串

输出描述：
输出为 2 行，每行一个单词，第一行输出最长单词，第二行输出最短单词，
若有多个相同长度的最长最短单词，则输出第一次出现的那个

样例输入:
I play the leading man who else

样例输出:
leading

I
*/
#include<iostream>
#include<algorithm>
#include<string.h>
using namespace std;

int main() {
	string a;
	while(getline(cin,a)) {
		int len=a.length() ;
		int max=0,min=500;
		int m=0,n;
		char b[500],c[500];
		for(int i=0;i<len;i++) {
			if(a[i]==' '||i==len-1) {
				n=i;
				if(n-m>max) {
					max=n-m;
					int k=0;
					for(int j=m;j<n;j++)
						b[k++]=a[j];
					if(i==len-1)
						b[k++]=a[len-1];
					b[k]='\0';
				}
				if(n-m<min) {
					min=n-m;
					int k=0;
					for(int j=m;j<n;j++)
						c[k++]=a[j];
					if(i==len-1)
						c[k++]=a[len-1];
					c[k]='\0';
				}
				m=i+1;
			}
		}
		for(int i=0;i<strlen(b);i++) 
			cout<<b[i];
		cout<<endl;
		for(int i=0;i<strlen(c);i++)
			cout<<c[i];
		cout<<endl;
	}
	return 0;
}

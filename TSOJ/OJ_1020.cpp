/*
��Ŀ����:
���������ɸ�������ɵ��ַ������ַ����ĳ���С�� 500�����ʺ͵���֮���ɿո�ֿ���
������е����̵���

����������
����С�� 500 ���ַ���

���������
���Ϊ 2 �У�ÿ��һ�����ʣ���һ���������ʣ��ڶ��������̵��ʣ�
���ж����ͬ���ȵ����̵��ʣ��������һ�γ��ֵ��Ǹ�

��������:
I play the leading man who else

�������:
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

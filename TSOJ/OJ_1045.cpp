/*
��Ŀ����:
����10��������,ÿ����������С��10000�������е�������Ͳ����

����������
����Ϊһ�У�����10��������

���������
���Ϊһ�У�Ϊ����������������������ĺ�

��������:
1 2 3 4 5 6 7 8 9 10

�������:
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

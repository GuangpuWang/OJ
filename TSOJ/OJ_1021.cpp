/*��������

��Ŀ����:
���� 2012 �� 1 �� 1 ���������գ������ n ��������ڼ�

����������
��������ÿ������һ�������� n (1 <= n <= 2000)

���������
����ÿ�����룬��� 1 ������ i (1 <= i <= 7)����ʾ n ��������ڼ�

��������:
1

2

�������:
1

2
*/
#include<iostream>
#include<algorithm>
using namespace std;
int main() {
	for(int n;cin>>n;) {
		if(n%7==0)
			cout<<"7"<<endl;
		else 
			cout<<n%7<<endl;
	}
	return 0;
}





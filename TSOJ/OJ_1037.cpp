/*�������

��Ŀ����:
��� n �������ĺ͡�

����������
��һ��Ϊһ�������� n (1 < n < 1000)�������� n ��ÿ��һ��������

���������
һ����������Ϊ���и������ĺ͡�

��������:
4

1

2

3

4

�������:
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







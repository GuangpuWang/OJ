/*
��Ŀ����:
����һ���������������������������

����������
����һϵ�е�������0��1��-1���⣩��ÿ��һ��

���������
������е��������ӣ�ÿ������֮����1���ո�ֿ������һ�����Ӻ���û�пո�

��������:
8

30

125

�������:
2 2 2

2 3 5

5 5 5
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int prime(int n);
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i=2,j=0,x,a[n];
		for(i=2;i<=n;i++)
		{
			x=prime(i);
			while(n%i==0&&x==1)
			{
				a[j++]=i;
				n/=i;
			}
		}
		for(i=0;i<j-1;i++)    printf("%d ",a[i]);
		printf("%d\n",a[j-1]);
	}
	return 0;
}
int prime(int n)
{
	int i;
	int x=1;
	for(i=2;i<=sqrt(n);i++)
		if(n%i==0)
		{
			x=0;
			break;
		}
	return x;
}

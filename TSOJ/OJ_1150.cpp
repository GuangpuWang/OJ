/*
��Ŀ����:
һ��ϸ���ķ�ֳ�ٶ���ÿ��ɱ����������磺��һ����10�����ڶ���ͱ��20������������40������������80�������������ڸ�����һ������ں�ϸ����Ŀ��Ҫ��д���������ĳһ���ʱ��ϸ������Ŀ��

����������
��һ����һ������n����ʾ�������ݵ���Ŀ�����n��ÿ����5������������֮����һ���ո��������һ������ʾ��һ����·ݣ��ڶ�������ʾ��һ������ڣ�����������ʾ��һ��ϸ������Ŀ�����ĸ�����ʾҪ�����һ����·ݣ����������ʾҪ�����һ������ڡ���֪��һ���Ҫ���һ����ͬһ�겢�Ҹ��겻�����꣬Ҫ���һ��һ���ڵ�һ��֮�����ݱ�֤Ҫ���һ���ϸ����Ŀ�ڳ�������long����Χ�ڡ�

���������
����ÿһ��������ݣ����һ�У����а���һ��������ΪҪ���һ���ϸ������

��������:
2

1 1 1 1 2

2 28 10 3 2

�������:
2

40
*/
#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	long int a[5];
	for(i=1;i<=n;i++)
	{
		int j;
		for(j=0;j<5;j++)    scanf("%d",&a[j]);
		int x,y,c,d;
			switch(a[3])
			{
				case 1:c=a[4];break;
				case 2:c=a[4]+31;break;
				case 3:c=a[4]+59;break;
				case 4:c=a[4]+90;break;
				case 5:c=a[4]+120;break;
				case 6:c=a[4]+151;break;
				case 7:c=a[4]+181;break;
				case 8:c=a[4]+212;break;
				case 9:c=a[4]+243;break;
				case 10:c=a[4]+273;break;
				case 11:c=a[4]+304;break;
				case 12:c=a[4]+334;break;
			}
			switch(a[0])
			{
				case 1:d=a[1];break;
				case 2:d=a[1]+31;break;
				case 3:d=a[1]+59;break;
				case 4:d=a[1]+90;break;
				case 5:d=a[1]+120;break;
				case 6:d=a[1]+151;break;
				case 7:d=a[1]+181;break;
				case 8:d=a[1]+212;break;
				case 9:d=a[1]+243;break;
				case 10:d=a[1]+273;break;
				case 11:d=a[1]+304;break;
				case 12:d=a[1]+334;break;
			}
			y=c-d;
		x=a[2]*pow(2,y);
		printf("%ld\n",x);
	}
	return 0;
}

/*
��Ŀ������
����һ�б��ʽ���м�û�пո�������ʽ�ļ��������������ݱ�֤�� int ��Χ֮�ڡ�

���Ǽ򵥵�һ����Ŀ��ֻ�漰�ӷ��ͼ�����

����������
һ�б��ʽ

���������
���ʽ�ļ�����

�������룺
12+21-0

���������
33
*/
#include<stdio.h>
#include<math.h>
#include<string.h>
int main()
{
	int a;
	char c;
	while(scanf("%d",&a)!=EOF)
	{
		int num[500];
		num[0]=a;
		int k=1;
		while(scanf("%c",&c)!=EOF)
		{
		   	if(c=='\n')
				break;
			else
			{
				int b;
		    	scanf("%d",&b);
				switch(c)
				{
					case '+':
						num[k++]=b;
						break;
					case '-':
						num[k++]=-b;
						break;
				}
			}
		}
		int sum=0;
		for(int i=0;i<k;i++)
		 	sum+=num[i];
		printf("%d\n",sum);
	}
	return 0;
}

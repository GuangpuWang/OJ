/*
��Ŀ����:
����һ�������� n (2 <= n < 10000)���ж��Ƿ�Ϊ������

����������
�������룬ÿ��һ�� n (2 <= n <= 10000)��

���������
����ÿһ�������������������� Yes��������� No��

��������:
2

3

4

�������:
Yes

Yes

No
*/
#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,a;
	while(scanf("%d",&n)!=EOF)
	{
        a=1;
		for(i=2;i<=sqrt(n);i++)
			if(n%i==0)
		    {
			    a=0;
		        break;
		    }
		    else   a=1;
		if(a==1)   printf("Yes\n");
		else       printf("No\n");
	}
	return 0;
}

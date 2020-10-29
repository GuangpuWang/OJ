#include<stdio.h>
#include<string.h>
#include<math.h>
char a[19][10]={"pop","no","zip","zotz","tzec","xul","yoxkin",
					"mol","chen","yax","zac","ceh","mac","kankin",
					"muan","pax","koyab","cumhu","uayet"};
char b[20][10]={"imix","ik","akbal","kan","chicchan","cimi",
					"manik","lamat","muluk","ok","chuen","eb",
					"ben","ix","mem","cib","caban","eznab","canac","ahau"};
int main()
{
	int d;
	while(scanf("%d",&d)!=EOF)
	{
		int m,n,i,j;
		char ch[10];
		for(i=1;i<=d;i++)
		{
			scanf("%d %s %d",&m,ch,&n);
			for(j=0;j<20;j++)
				if(!strcmp(a[j],ch))
					break;
			int day=0;
			day=n*365+j*20+m;
			printf("%d %s %d\n",1+day%13,b[day%20],day/260);
		}
	}
	return 0;
}

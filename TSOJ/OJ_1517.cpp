/*一元二次方程的根*/ 
#include<stdio.h>
#include<math.h>
int main()
{
	double a,b,c,d,e,x1,x2;
	while(scanf("%lf %lf %lf",&a,&b,&c)!=EOF)
	{
		d=b*b-4*a*c;
		e=-b/2/a;
	    if(a==0)   printf("不是一元二次方程\n");
		else if(d==0)
		    {
			    x1=e;
			    x2=e;
			    printf("%.2lf %.2lf\n",x1,x2);
			}
		else if(d>0)  
		    {
			    x1=e+sqrt(d)/2/a;
			    x2=e-sqrt(d)/2/a;
			    printf("%.2lf %.2lf\n",x1,x2);
			}
		 else
		    {
		        x1=sqrt(-d)/2/a;
			    x2=sqrt(-d)/2/a;
			    printf("%.2lf+%.2lfi %.2lf-%.2lfi\n",e,x1,e,x2);
		    }	
    }
	return 0;
}

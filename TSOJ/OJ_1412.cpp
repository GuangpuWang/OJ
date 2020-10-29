#include<iostream>
#include<cmath>
using namespace std;
void fun(int n,int x,int y)
{
	bool flag=false;
        int counter=1,num;
        int a=0,b=n-1,c=0,d=n-1;
        do
        {
            for(int i =c;i<=d;i++)
			{
                if (x-1==a&&y-1==i) 
				{
                    num = counter;
                    flag =true;
                    break;
                }
                counter++;
            }
            a++;
            for (int i=a;i<=b;i++) 
			{
                if (x-1==i&&y-1==d) 
				{
                    num = counter;
                    flag =true;
                    break;
                }
                counter++;
            }
            d--;
            for (int i=d;i>=c;i--) 
			{
                if (x-1==b&&y-1==i) 
				{
                    num=counter;
                    flag=true;
                    break;
                }
                counter++;
            }
            b--;
            for (int i=b;i>=a;i--) 
			{
                if (x-1==i&&y-1==c) 
				{
                    num=counter;
                    flag =true;
                    break;
                }
                counter++;
            }
            c++;
            if (flag) break;
        }while(counter<=n*n);
        
        cout << num << endl;
}
int main()
{
    for(int n,x,y;cin>>n>>x>>y;)
        fun(n,x,y);
	return 0;
}

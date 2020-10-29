#include <bits/stdc++.h>
#define MAXBUFFER 100
using namespace std;
stack<char> sign;
stack<double> result;
bool flag_0=true;
void smath(char c)
{
	double temp1=result.top();
	result.pop();
	double temp2=result.top();
	result.pop();
	switch(c){
		case '+':
			result.push(0.0+temp2+temp1);
			break;
		case '-':
			result.push(0.0+temp2-temp1);
			break;
		case '*':
			result.push(1.0*temp2*temp1);
			break;
		case '/':			//判断除法分母是否为0
			if(temp1==0){
				cout<<"error!"<<endl;
				flag_0=false;
				break;
			}
			result.push(1.0*temp2/temp1);
			break;
		default:
			break;
	}
}
double calculator(string s)
{
	bool flag=true;
	int l=s.size();
	char num[MAXBUFFER]={'\0'};
	for(int i=0;i<l;++i){
		if(!flag){
			break;
		}
		int k=0;
		double d=0;
		while(isdigit(s[i])||s[i]=='.'){
            num[k++]=s[i];
            num[k]='\0';
			++i;
            if(!isdigit(s[i])&&s[i]!='.'){
                d=atof(num);
                result.push(d);
                k=0;
                break;
            }
        }							//把数字存到num[]中，用atof把num转成浮点数存入d 						
		if(i>=l)
			break;
		if(sign.empty()){
			sign.push(s[i]);
		}else{
			switch(s[i]){
			case '+':
			case '-':
				while(!sign.empty()&&sign.top()!='('){
					smath(sign.top());
					sign.pop();
				}
				sign.push(s[i]);
				break;
				
			case '*':
			case '/':
				while(sign.top()=='*'||sign.top()=='/'||sign.top()=='^'){
					smath(sign.top());
					if(!flag_0){
						flag=false;
						break;
					}
					sign.pop();
				}
				sign.push(s[i]);
				break;
		
			case '(':
				sign.push(s[i]);
				break;
				
			case ')':
				while (sign.top()!='('&&!sign.empty()){
					smath(sign.top());
					sign.pop();
				}
				sign.pop();
				break; 

			default :
				break;
			}
		}
	}
	while (!sign.empty()){
		smath(sign.top());
		sign.pop();
	}
	return result.top();
}
int main()
{
	string a;
	double result;
	while(cin>>a){
		flag_0=true; 
		result=calculator(a);
		if(!flag_0){
			continue;
		}
		printf("%.2lf\n",result);
	}
	return 0;
}

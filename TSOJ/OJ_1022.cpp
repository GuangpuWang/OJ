/*
题目描述:
已知 2007 年 10 月 10 日，请求出 n 天后是几月几号

输入描述：
多组输入，每组输入为 1 行，为一个正整数 n (1 <= n <= 2000)

输出描述：
对于每组输入，输出格式为 yyyy-mm-dd，输出的值为 n 天后的日期

样例输入:
1

2

样例输出:
2007-10-11

2007-10-12
*/
#include<iostream>
#include<algorithm>
using namespace std;

struct Date {
	int year;
	int month;
	int day;
};

int leap(int year) {
 	if(year%4==0&&year%100!=0 || year%400==0)
    	return 1;
 	else 
	 	return 0;
}

int days(int year ,int month) {
 	if(leap(year)&&month==2)
  		return 29;
 	if(month==2)
  		return 28;
 	if(month==4 || month==6 || month==9 || month==11)
     	return 30;
	return 31;
}

struct Date nextDay(struct Date a) {
 	if(a.day==days(a.year,a.month)) {
  		a.day=1;
  		if(a.month==12) {
			a.year++;
			a.month=1;  
		}
		else 
			a.month=1+a.month;
	}
 	else 
	 	a.day++;
 	return a; 
}

int main() {
	int n;
 	while(cin>>n) {
		struct Date x;
			x.year=2007;
			x.month=10;
			x.day=10;
			
		for(int i=1;i<=n;i++) {
			x=nextDay(x);
		}
		
 		cout<<x.year ;
 		if(x.month<10) 
			cout<<"-0"<<x.month ; 
 		else 
		 	cout<<"-"<<x.month ;
 		if(x.day<10)  
		 	cout<<"-0"<<x.day ;
 		else 
		 	cout<<"-"<<x.day ;
		cout<<endl;
	}
 	return 0; 
}

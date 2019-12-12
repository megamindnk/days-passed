#include<iostream>
using namespace std;
int main()
{
	int d,m,y,days=0,i;
	int mon[12]={31,29,31,30,31,30,31,30,31,30,31,30};
	
	cout<<"enter the date in dd mm yyyy format:-";
	cin>>d>>m>>y;
	
	for(i=0;i<m-1;i++)
	{
		days += mon[i];
	}
	days += d;
	
	if(y%4==0)
		cout<<"the days passed in year "<<y<<" are :-"<<days<<endl;
	else
		cout<<"the days passed in year "<<y<<" are :-"<<days-1<<endl;
		
}

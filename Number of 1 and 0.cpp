#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
	int one=0,zeros=0;
	cout<<"Enter a Binary Number :";
	cin>>str;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]=='1')
		{
			one++;
			
		}
		else
		{
			zeros++;
		}
	}
	cout<<"Number of One's :"<<one<<endl;

	cout<<"Number of Zero's :"<<zeros;
}

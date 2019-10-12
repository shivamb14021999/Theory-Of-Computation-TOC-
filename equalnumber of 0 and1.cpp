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
	
	if (one==zeros)
	{
		cout<<"The string is Accepted.";
		
	}
	else
	{
		cout<<"The string is not Accepted.";
	}
}

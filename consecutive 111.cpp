#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
	int flag=0;
	cout<<"Enter a Binary Number :";
	cin>>str;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]=='0')
		{
			flag=0;
			i=i+1;
		}
		else
		{
			
			if(str[i]=='1' && str[i+1]=='1' && str[i+2]=='1')
			{
				flag=0;
				i=i+3;
			}
			else
			{flag=1;
				break;
			}
		}
	}
		if(flag==0)
		{
			cout<<"The string is accepted.";
		}
		else
		{
			cout<<"The string is not Accepted.";
		}
}

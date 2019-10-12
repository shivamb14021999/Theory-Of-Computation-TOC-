#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter a Binary Number :";
	cin>>str;
	for(int i=0;i<strlen(str);)
	{
		if(str[i]=='0')
		{
			str[i]='1';
			i++;
		}
		else
		{
			str[i]='0';
			i++;
		}
	}
	for(int i=strlen(str)-1;i>=0;i--)
	{
			if(str[i]=='0')
			{
				str[i]='1';
				break;
			}
			else
			{
				str[i]='0';
			}
	}
	cout<<"Two's  Complement  is :"<<str;
}

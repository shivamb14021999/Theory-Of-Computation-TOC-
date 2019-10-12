#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter a Binary Number :";
	cin>>str;
	for(int i=0;i<strlen(str);i++)
	{
		if(str[i]=='0')
		{
			str[i]='1';
		}
		else
		{
			str[i]='0';
		}
	}
	cout<<"One's Complement is :"<<str;
}

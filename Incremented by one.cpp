#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter a Binary Number :";
	cin>>str;
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
	cout<<"incremented by 1 :"<<str;
}

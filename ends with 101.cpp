#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter a Binary Number :";
	cin>>str;
		if(str[strlen(str)-1]=='1' && str[strlen(str)-2]=='0' && str[strlen(str)-3]=='1')
			{
				cout<<"The string is Accepted.";
			}
		else
			{
				cout<<"The string is  not Accepted.";
			}
}

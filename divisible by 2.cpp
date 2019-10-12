#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
	cout<<"Enter a decimal Number :";
	cin>>str;
		if(str[strlen(str)-1]=='0' || str[strlen(str)-1]=='2' || str[strlen(str)-1]=='4' || str[strlen(str)-1]=='6' || str[strlen(str)-1]=='8')
			{
				cout<<"The string is Accepted.";
			}
		else
			{
				cout<<"The string is  not Accepted.";
			}
}

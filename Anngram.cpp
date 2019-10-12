#include <bits/stdc++.h>
using namespace std;
int main()
{
	 string str1,str2;
	 cout<<"Enter the First String :";
	 cin>>str1;
	 cout<<"ENter the Second String :";
	 cin>>str2;
	 sort(str1.begin(), str1.end()); 
	 sort(str2.begin(), str2.end());
	  if(str1==str2)
	  {
	  	cout<<"They are anngram.";
	   } 
	   else
	   {
	   	cout<<"They are not annagram.";
	   }
}


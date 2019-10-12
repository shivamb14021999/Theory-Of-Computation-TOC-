#include<iostream>
#include <string.h>  
using namespace std;
 int main()
 {
 	char str[100];
 	cout<<"Enter the String";
 	cin>>str;
 	int delimiter=0,operators=0,number=0,special=0;
	for (int i = 0; i < strlen(str); i++)
	{
	
	char ch=str[i];
	
		if (ch == ' ' || ch == '+' || ch == '-' || ch == '*' ||  
        ch == '/' || ch == ',' || ch == ';' || ch == '>' ||  
        ch == '<' || ch == '=' || ch == '(' || ch == ')' ||  
        ch == '[' || ch == ']' || ch == '{' || ch == '}') 
        {
        	delimiter++;
		}
		else
		{
				if (ch == '+' || ch == '-' || ch == '*' ||  
        ch == '/' || ch == '>' || ch == '<' ||  
        ch == '=') 
        {
        	operators++;
		}
			else
			{if (str[i] == '0' || str[i] == '1' || str[i] == '2'
            || str[i] == '3' || str[i] == '4' || str[i] == '5'
            || str[i] == '6' || str[i] == '7' || str[i] == '8'
            || str[i] == '9')
            {
            number++;	
			}
		else
		{
			special++;
		}

}
	}
	}
	cout<<"Numbers of Operators :"<<operators<<endl;
	cout<<"Numbers of Delimiter :"<<delimiter<<endl;
	cout<<"Numbers of Numbers :"<<number<<endl;
	cout<<"Numbers of Special :"<<special<<endl;
	
 }

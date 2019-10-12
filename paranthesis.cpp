#include<bits/stdc++.h>
void push(char);
char pop();
char peek();
void showall();
bool isempty();
char stack[100];
int top=-1;
int main()
{
	int i=0;
	char x[100];
	printf("Enter an Expression");
	scanf("%s",x[100]);
	while(x[i]=!'/0')
	{
		if(x[i]=='{' || x[i]=='(' || x[i]=='[')
		{
			push(x[i]);
			showall();
		}
		else
		if(x[i]=='}' || x[i]==')' || x[i]==']')
		{
			if(top==-1)
			{
				top=1;
				break;
			}
			
			if(x[i]=='}')
			{
				if(stack[top]=='{')
				{
					pop();
				}
				else 
				{
					break;
				}
			}
			
			if(x[i]==')')
			{
				if(stack[top]=='(')
				{
					pop();
				}
				else 
				{
					break;
				}
			}
			
			if(x[i]==']')
			{
				if(stack[top]=='[')
				{
					pop();
				}
				else 
				{
					break;
				}
			}
			}
			i++;
				
		}
		
	if(top==-1)
		{
			printf("Expression Is Correct");
		}
		else
		{
			printf("Expression Is InCorrect");
		}
		
	}
	void push(char value)
	{
		top++;
		stack[top]=value;
	}
	char pop()
	{
	 top--;
	}
    char peek()
	{
	return stack[top];
	}
	void showall()
	{
		int j=top;
	while(stack[j]=!'/0')
	{
		printf("%c",stack[j]);
	}	
	}

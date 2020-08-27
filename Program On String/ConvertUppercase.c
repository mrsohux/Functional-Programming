/*
2.Write a program which accept string from user and convert it into
upper case.

Input : “Sohel Riyaz Shaikh”

Output : SOHEL RIYAZ SHAIKH
*/
#include<stdio.h>
void Covertupper(char *str)
{
	char temp='\0';
		if(str==NULL)
		{
			return;
		}
		
		while(*str !='\0')
		{
			if(*str >='a' && *str<='z')
			{
				temp=*str;
				*str=temp-32;
			}
			else
			{
				*str;
			}
			str++;
		}
}

int main()
{
	char arr[30];
	
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	
	Covertupper(arr);
	
	printf("Modified string is %s",arr);
	return 0;
}

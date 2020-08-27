/*
1.Write a program which accept string from user and convert it into
lower case.

Input : “Sohel Riyaz Shaikh”

Output : sohel riyaz shaikh
*/
#include<stdio.h>
void strcox(char *str)
{
	int i=0;
	char temp='\0';
	if(str==NULL)
	{
		return;
	}
	while(str[i] !='\0')
	{
		if(str[i]>='A' && str[i]<='Z')
		{
			temp=str[i];
			str[i]=temp+32;
		}
		else{
			str[i];
		}
	  i++;
	}
}

int main()
{
	char arr[30];
	
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	
	strcox(arr);
	
	printf("Modified string is %s",arr);
	return 0;
}

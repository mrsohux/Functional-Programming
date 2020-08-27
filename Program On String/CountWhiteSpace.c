/*
Write a program which accept string from user and count number of
white spaces

Input : “Sohel”

Output : 0

Input : “Sohel Shaikh”

Output : 1

Input : “Sohel Riyaz Shaikh”

Output : 2
*/

#include<stdio.h>

int CountWhiteSpace(char *str)
{ int iCnt=0;
	if(str==NULL)
	{
		return -1;
	}
	
	while(*str !='\0')
	{
		if(*str == ' ')
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	int iret=0;
	char arr[30];
	printf("Enter String");
	scanf("%[^'\n']s",arr);
	
	iret=CountWhiteSpace(arr);
	
	printf("%d ",iret);
	return 0;
}

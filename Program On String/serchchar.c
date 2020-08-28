/*
Write a program which accept string from user and accept one character. Check whether that character is present in string or not.

Input : “sohel”
			e

Output : TRUE

Input : “sohel shaikh”
			W

Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkChar(char *str,char ch)
{
	while(*str!='\0')
	{
		if(*str == ch)
		{
			break;
		}
		str++;
	}
	if(*str ==ch)
	{
		return TRUE;
	}
	else{
		return FALSE;
	}
}

int main()
{
	char arr[30];
	char ch='\0';
	BOOL bRet=FALSE;
	
	printf("Enter String");
	scanf("%[^'\n']s",arr);
	
	printf("Enter serch charcter");
	scanf(" %c",&ch);
	
	bRet=chkChar(arr,ch);
	
	if(bRet==TRUE)
	{
		printf("charcter found");
	}
	else{
		printf("Character not found");
	}
	return 0;
}

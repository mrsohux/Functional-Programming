/*
Write a program which 2 strings from user and check whether
contents of two strings are equal or not. (Implement strcmp()
function).

Input : sohel
        sohel

Output : TRUE

*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

int strcompare(char *str1,char *str2)
{
	
	if((str1==NULL) || (str2==NULL))
	{
		return -1;
	}
	while((*str1!='\0') && (*str2 !='\0'))
	{
		
		if(*str1==*str2)
		{
		    str1++;
		    str2++;
		}
		else
		{
			break;
		}
		
		
	}
	
	if((*str1=='\0') || (*str2=='\0'))
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
	char brr[30];
	
	BOOL bRet=FALSE;
	
	printf("Enter String First");
	scanf("%[^'\n']s",arr);
	
	printf("Enter second string");
	scanf(" %[^'\n']s",brr);
	
	bRet=strcompare(arr,brr);
	
	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	else{
		printf("FALSE");
	}
	return 0;
}

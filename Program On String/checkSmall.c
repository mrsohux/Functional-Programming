/*
Accept Character from user and check whether it is small case or
not (a-z).
Input : g
Output : TRUE
Input : D
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE  0

typedef int BOOL;
BOOL chksmall(char ch)
{
	
	if(ch>='a' && ch <='z')
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

int main()

{
	
	char ch='\0';
	BOOL bRet= FALSE;
	printf("Enter Character");
	scanf("%c",&ch);
	
	bRet=chksmall(ch);
	
	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	else
	{
		printf("FALSE");
	}
	return 0;
	
}

/*
Accept Character from user and check whether it is capital or not
(A-Z).
Input : F
Output : TRUE
Input : d
Output : FALSE
*/
#include<stdio.h>
#define TRUE 1
#define FALSE  0

typedef int BOOL;
BOOL chkCap(char ch)
{
	
	if(ch>='A' && ch <='Z')
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
	
	bRet=chkCap(ch);
	
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

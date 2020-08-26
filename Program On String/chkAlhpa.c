/*
Accept Character from user and check whether it is alphabet or not
(A-Z a-z).
Input : F
Output : It is charcter
Input : &
Output :It is not charcter
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL chkAlpha(char ch)
{
	if(ch==NULL)
	{
		return -1;
	}
	
	if((ch>='A' && ch<='Z')||(ch>='a' && ch <='z'))
	{
		return TRUE;
	}
	else{
		return FALSE;
	}
}


int main()
{
	char cValue='\0';
	BOOL bRet=FALSE;
	printf("Enter Character");
	scanf("%c",&cValue);
	
	bRet=chkAlpha(cValue);
	if(bRet==TRUE)
	{
		printf("It is charcter");
	}
	else{
		printf("It is not charcter");
	}
	
	return 0;
	
	
}

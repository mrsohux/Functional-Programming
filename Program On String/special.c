/*
Accept Character from user and check whether it is special symbol
or not (!, @, #, $, %, ^, &, *).
Input : %
Output : TRUE
Input : d
Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL specialcase(char ch)
{

	if(ch =='!' || ch=='@' || ch=='#'|| ch=='$'|| ch=='%'|| ch=='^'|| ch=='&'|| ch=='*' )
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
	printf("Enter Charcter");
	scanf("%c",&cValue);
	
	bRet=specialcase(cValue);
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

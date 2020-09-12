/*

5. Accept string from user and check whether the string is palindrome
or not without considering its case.

Input : “1abccBA1”

Output : TRUE

*/

#include<stdio.h>

typedef int BOOL;

#define TRUE 1
#define FALSE 0

BOOL strpalindrome(char *str)
{
	int iStart=0,iEnd=0;
	
	if(str==NULL)
	{
		return -1;
	}
	
	while(str[iEnd] !='\0')
	{
		iEnd++;
	}
	iEnd--;
	
	while(iStart<=iEnd)
	{
		if((str[iStart]>='A')&&(str[iStart]<='Z'))
		{
			str[iStart]=str[iStart]+32;
			
		}
		if((str[iEnd]>='A') && (str[iEnd]<='Z'))
		{
			str[iEnd]=str[iEnd]+32;
		}
		
		if(str[iStart]==str[iEnd])
		{
			iStart++;
			iEnd--;
		}
		else
		{
			break;
		}
	}
	
	if(iStart>=iEnd)
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
	BOOL bret=FALSE;
	
	printf("Enter string");
	scanf("%s",arr);
	
	bret=strpalindrome(arr);
	
	if(bret==TRUE)
	{
		printf("String is palindrome");
	}
	else{
		printf("String is not palindrome");
	}
	
	return 0;
	
}

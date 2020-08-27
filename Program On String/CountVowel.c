/*
Write a program which accept string from user and check whether
it contains vowels in it or not.

Input : “sohel”

Output : TRUE

Input : “Demo”

Output : TRUE

Input : “xyz”

Output : FALSE
*/

#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

BOOL CountVowel(char *str)
{
	if(str==NULL)
	{
		return -1;
	}
	
	while(*str!='\0')
	{
		if(*str =='a' ||*str =='e' ||*str =='i' ||*str =='o' ||*str =='u' ||*str =='A' ||*str =='E' ||*str =='I' ||*str =='O' ||*str =='U')
		{
			break;
		}
		str++;
	}
	if(*str !='\0')
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
	char arr[30];
	BOOL bRet=FALSE;
	
	printf("Enter String ");
	scanf("%[^'\n']s",arr);
	
	bRet=CountVowel(arr);
	
	if(bRet==TRUE)
	{
		printf("TRUE");
	}
	else{
		printf("FALSE");
	}
	
	return 0;
}

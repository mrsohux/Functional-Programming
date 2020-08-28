/*
Write a program which accept string from user and accept one
character. Return frequency of that character.

Input : “sohel riyaz shaikh”
        s

Output : 2


*/
#include<stdio.h>

int countfreq(char *str,char ch)
{
	int iCnt=0;
	while(*str !='\0')
	{
		if(*str == ch)
		{
			iCnt++;
		}
		str++;
	}
	return iCnt;
}

int main()
{
	char arr[30];
	int iret=0;
	char ch='\0';
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	
	printf("Enter search charcter");
	scanf(" %c",&ch);
	
	iret=countfreq(arr,ch);
	
	printf("frequency is %d",iret);
	
	return 0;
	
}

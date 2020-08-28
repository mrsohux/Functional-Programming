/*
Write a program which accept string from user and accept one character. Return index of last occurrence of that character.


*/

#include<stdio.h>
int lastOccurance(char *str,char ch)
{
	int iPos=0;
	int i=0;
	
	while(str[i] !='\0')
	{
		if(str[i]==ch)
		{
			iPos=i;
		}
		i++;		
	}
	return iPos;
}


int main()
{
	char arr[30];
	char ch='\0';
	int iRet=0;
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	printf("Enter charter");
	scanf(" %c",&ch);
	
	iRet=lastOccurance(arr,ch);
	
	printf("Last occurance poistion is %d",iRet);
	
	return 0;
}

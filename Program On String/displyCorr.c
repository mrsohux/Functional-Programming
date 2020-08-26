/*
2. Accept character from user. If character is small display its
corresponding capital character, and if it small then display its
corresponding capital. In other cases display as it is.
Input : Q
Output : q
Input : m
Output : M
Input : 4
Output : 4
Input : %
Output : %
*/
#include<stdio.h>
void DisplayCorr(char ch)
{
	if( ch>='A' && ch <='Z')
	{
		printf("%c",ch+32);
	}
	else if( ch>='a' && ch <='z')
	{
		printf("%c",ch-32);
	}
	else if( ch>='0' && ch <='9')
	{
		printf("%c",ch);
	}
	else{
		printf("%c",ch);
	}
	
	
}
int main()
{
	char cValue='\0';
	
	printf("Enter character");
	scanf("%c",&cValue);
	
	DisplayCorr(cValue);
	
	return 0;
	
}

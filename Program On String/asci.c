/*
Accept character from user and display its ASCII value in decimal,
octal and hexadecimal format.
Input : A
Output : Decimal 65
	     Octal 0101
         Hexadecimal 0X41
*/

#include<stdio.h>
void Display(char ch)
{
	if((ch>='A' && ch<='Z') ||(ch>='a' && ch<='z'))
	{
		printf("Descimal %d\n",ch);
		printf("Octal %o\n",ch);
		printf("Hexadecimal 0x%x",ch);
	}
}
int main()
{
	char cValue='\0';
	
	printf("Enter charcter");
	scanf("%c",&cValue);
	Display(cValue);
	return 0;
}

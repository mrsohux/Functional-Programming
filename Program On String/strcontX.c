/*
Write a program which 2 strings from user and concat second string
after first string. (Implement strcat() function).

Input : “sohel”
“shaikh”

Output : “sohel shaikh”
*/

#include<stdio.h>
void strcatX(char *str1,char *str2)
{
	while(*str1 !='\0')
	{
		str1++;
	}
	while(*str2 !='\0')
	{
		*str1=*str2;
		str1++;
		str2++;
	}
	*str1='\0';
}

int main()
{
	char arr[30];
	char brr[30];
	
	printf("Enter fisrt string");
	scanf("%[^'\n']s",arr);
	
	printf("Enter second string");
	scanf(" %[^'\n']s",brr);
	
	strcatX(arr,brr);
	
	printf("concat string is %s  ",arr);
	
	return 0;
	
}

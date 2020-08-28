/*
Write a program which accept string from user and copy the contents of that string into another string. (Implement strcpy()
function)

Input : “ Sohel Shaikh”

Output : “Sohel Shaikh"
*/
#include<stdio.h>
void strcpyX(char *src,char *des)
{
	if(src==NULL)
	{
		return ;
		
	}
	
	while(*src !='\0')
	{
		*des=*src;
		src++;
		des++;
	}
	*des='\0';
}

int main()
{
	char arr[30];
	char brr[30];
	
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	
	strcpyX(arr,brr);
	
	printf("Copied string is %s",brr);
	
	return 0;
}

/*
Write a program which accept string from user and copy capital characters of that string into another string.

Input : “Sohel Riayz Shaikh”

Output : “SRS”
*/

#include<stdio.h>

 void copycaptial(char *src,char *des)
 {
	 if(src==NULL)
	 {
		 return;
	}
 
 while(*src !='\0')
 {
	 if((*src >='A') && (*src<='Z'))
	 {
		 *des=*src;
		 des++;
	 }
	 src++;
 }
 *des='\0';
 }

int main()
{
	char arr[30];
	char brr[30];
	
	printf("Enter string");
	scanf("%[^'\n']",arr);
	
	copycaptial(arr,brr);
	
	printf("captial string is %s",brr);
	return 0;
}

/*
Write a program which accept string from user and copy small characters of that string into another string.


*/

#include<stdio.h>
#include<stdio.h>

 void copysmallchr(char *src,char *des)
 {
	 if(src==NULL)
	 {
		 return;
	}
 
 while(*src !='\0')
 {
	 if((*src >='a') && (*src<='z') || (*src==' '))
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
	
	copysmallchr(arr,brr);
	
	printf("small charcter string is %s",brr);
	return 0;
}

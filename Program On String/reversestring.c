/*
Write a program which accept string from user and display it inn
reverse order.

Input : “Sohel Shaikh”

Output : “hkiahS lehoS”
*/

#include<stdio.h>
void strreverseX(char str[])
{
	int iStart=0,iEnd=0;
	char temp='\0';
	
	while(str[iEnd] !='\0')
	{
		iEnd++;
	}
	iEnd--;
	
	while(iStart<iEnd)
	{
		temp=str[iStart];
		str[iStart]=str[iEnd];
		str[iEnd]=temp;
		
		iStart++;
		iEnd--;
	}
}
int main()
{
	char arr[30];
	
   printf("Enter String");
   scanf("%[^'\n']s",arr);
   
   strreverseX(arr);
   
   printf("Reverse string is %s\n",arr);
   
   return 0;
	
	
}

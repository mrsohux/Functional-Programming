/*
Write a program which accepts 2 strings from user and concat N characters of second string after first string.Value of N should be
accepted from user. (Implement strncat() function).
Note : If third parameter is greater than the size of second string then concat whole string after first string.
Input : “sohel shaikh”
		“computer engineer
		 5
Output : “sohel shaikh comput”
*/


#include<stdio.h>

void strcatX(char *src,char *des,int iCnt)
{
	int i=0,j=0;
	
	if(src==NULL)
	{
		return;
	}
	if(des==NULL)
	{
		return;
	}
	
	if(iCnt<0)
	{
		iCnt=-iCnt;
	}
	
   while(*src !='\0')
	{
		src++;
		
	}
	
	*src=' ';
    src++;
   
   while(des[i] !='\0')
   {
	   i++;
   }
   i--;

   if(iCnt>i)
   {
	   *src=*des;
	   src++;
	   des++;
   }

    while((*des !='\0')&&(iCnt !=0))
	{
		*src=*des;
		 src++;
		 des++;
		 iCnt--;
	}	
    *src='\0';	
}

int main()
{
	char arr[30];
	char brr[30];
	int iSize=0;
	
	printf("Enter First string");
	scanf(" %[^'\n']s",arr);
	
	printf("Enter second string");
	scanf(" %[^'\n']s",brr);
	
	
	printf("enter size");
	scanf(" %d",&iSize);
	
	strcatX(arr,brr,iSize);
	
	
	printf("New string is %s\n",arr);
	
	return 0;
	
}

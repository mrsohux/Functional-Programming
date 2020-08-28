/*
Write a program which accept string from user and copy the
contents of that string into another string. (Implement strncpy()
function)

Input : “Sohel Riyaz Shaikh”
10

Output : “Sohel Riya

Note : If third parameter is greater than the size of source string then
copy whole string into destination.
*/
#include<stdio.h>

void strncpyx(char *src,char *des,int iCnt)
{
	int i=0;
	
	while(src[i]!='\0')
	{
		i++;
	}
	i--;
	
	if(iCnt>i)
	{
		*des=*src;
		src++;
		des++;
	}
	
	while((*src!='\0')&&(iCnt !=0))
	{	
		
		*des=*src;
		src++;
		des++;
		iCnt--;
	}
	*des='\0';
}

int main()
{
	char arr[30];
	char brr[30];
	int iCnt=0;
	
	
	printf("Enter String");
	scanf("%[^'\n']s",arr);
	
	printf("Size of charcter");
	scanf(" %d",&iCnt);
	strncpyx(arr,brr,iCnt);
	
	printf("New string is %s",brr);
	return 0;
}

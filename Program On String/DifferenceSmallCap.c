/*
Write a program which accept string from user and return
difference between frequency of small characters and frequency of
capital characters.

Input : “SohelshaiS”

Output : 6 (8-2)
*/

#include<stdio.h>
int Difference(char *str)
{ int iCap=0,iSmall=0;
	if(str==NULL)
	{
		return -1;
		
	}
	while(*str !='\0')
	{
		if((*str>='A')&&(*str<='Z'))
		{
			iCap++;
		}
		if((*str>='a')&&(*str<='z'))
		{
			iSmall++;
		}
		str++;
	}
	return iSmall-iCap;
}
int main()
{
	char arr[30];
	
	int iret=0;
	
	printf("Enter String ");
	scanf("%[^'\n']s",arr);
	
	iret=Difference(arr);
	
	printf("Diffrence betwwen capital and small charter is %d",iret);
	return 0;
}

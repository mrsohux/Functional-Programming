/*
3.Write a program which accept string from user and accept one
character. Return index of first occurrence of that character.


#include<stdio.h>
int firstoccu(char *str,char ch)
{
	int i=0;
	
	while(*str !='\0')
	{
		if(*str==ch)
		{
			break;
		}
		str++;
		i++;
	}
	if(*str==ch)
	{
		return i;
	}
	else{
		return -1;
	}
}

int main()
{
	char arr[30];
	char ch='\0';
	
	int iret=0;
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	
	printf("serch charcter");
	scanf(" %c",&ch);
	
	iret=firstoccu(arr,ch);
	
	printf("First occurance of %c postion is %d",ch,iret);
	return 0;
}

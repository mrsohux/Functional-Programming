/*
3.Write a program which accept string from user and toggle the case.

Input : “Sohel Riyaz Shiakh”

Output : sOHEL rIYAZ sHAIKH
*/

#include<stdio.h>

void togglecase(char *str)
{
	char temp='\0';char temp1='\0';
	int i=0;
		if(str==NULL)
		{
			return;
		}
		

    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
			
}


int main()
{
	
	char arr[0];
	printf("Enter string");
	scanf("%[^'\n']s",arr);
	
	togglecase(arr);
	
	printf("modified string is %s",arr);
	
	return 0;
}

/*
Accept sing from user and reverse the contents of that string by
toggling the case.

Input : “aCBdef”
Output : “FEDcbA”
*/


#include<stdio.h>

void strrevx(char *str)
{
	char temp;
	int i=0;
	char *first,*last;
	if(str==NULL)
	{
		return;
	}
	
	first=str;
	last=str;
	
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
		
		////printf("%s\n",str);
		
		
	while(*last !='\0')
	{
		last++;
	}
	last--;
	
	
	while(first<=last )
    {
        
			temp=*last;
			*last=*first;
			*first=temp;
		first++;
		last--;
		
		
    }
		printf("%s\n",str);
		
		
	

			
		
}


int main()
{
	char arr[30];
	
	printf("Enter string");
	scanf("%s",arr);
	
	strrevx(arr);
	
	return 0;
}

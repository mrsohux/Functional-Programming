/*
problem statement: accept number from user and print that number of * on screen

*/

/*
Algorithum:

    START
         Accept number from user
		 Initialize another variable 
		 using for loop print * on screen
		 return * on screen
	END

*/


#include "header.h"

int main()
{
	
	int iValue=0;
	printf("Enter a number");
	scanf("%d",&iValue);
	
	Display(iValue);
	
		return 0;
	
}
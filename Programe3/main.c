/*
Problem statement : Accept one number from user and check wheteher number is divisible by 5 or not

*/

/*
Algorithum
	START
		Accept Number from user
		if number is divisible by 5
		then retun true
		otherwise return false
        result return in Another variable
		if result is true
		then print no is divisble 
		otherwise no is not divisble
	END
*/

#include "header.h"

int main()
{
	int iValue=0;
	BOOL iRet=FALSE;
	
	printf("Enter Number ");
	scanf("%d",&iValue);
	
	iRet=check(iValue);
	
	
	if(iRet==TRUE)
	{
		printf("Entered Number is Divisible");
	}else{
		printf("Number is Not divisble");
	}
	return 0;
}
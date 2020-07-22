/*
   Problem statement:Accept two numbers and return its addition
*/
#include "header.h"

/*
Algorithm
	START
		Accept Integer No1
		Accept Integer No2
		
		Initialize variable result
		
		perform addition No1+No2
		store result in ans
		
		return its addition in result
		
	END

*/


int main()             //Entry point function
{
	int iNo1=0;        //local variable
	int iNo2=0;
	
	int iRet=0;
	
	printf("Enter first Number");           //accept no1
	scanf("%d",&iNo1);
	
	printf("Enter second Number");          //accept no2
	scanf("%d",&iNo2);
	
	iRet=Addition(iNo1,iNo2);
	
	printf("Addition of two Numbers %d",iRet);
	
	
	return 0;				//Successful termination
	
	
}

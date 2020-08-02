//////////////////////////////////////////////////////
//	Function Name :	Check()
//   Integer	: 	None
//	output		: Number 5 to 1
//  Description : print a number in decreasing order
//	Author		: Sohel Riyaz Shaikh
//  Date		:26 July 2020
// 
//
/////////////////////////////////////////////////////


#include "header.h"

void check()
{
	int i=0;
	int ival=5;
	
	for(i=ival;i>=1;i--)
	{
		
		printf("%d",i);
		i++;
		i--;
	}
}
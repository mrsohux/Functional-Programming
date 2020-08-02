///////////////////////////////////////////////////////////////////////
//  
//  Function Name :	Check ()
//	Input		:	Integer()
//	Ouput		:	True or False
//	Description	: check enter number is divisible or not
//  Author		: Sohel Riyaz Shaikh
//	Date		: 26 July 2020
//
////////////////////////////////////////////////////////////////////


#include "header.h"

BOOL check(int iNO)
{
	if((iNO%5)==0)
	{
		return TRUE;
	}else{
		return FALSE;
	}
	
}
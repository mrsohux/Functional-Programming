/*
Accept division of student from user and depends on the division
display exam timing. There are 4 divisions in school as A,B,C,D. Exam
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM.
(Application should be case insensitive)
Input : C
Output : Your exam at 9.20 AM
Input : d
Output : Your exam at 10.30 AM
*/

#include<stdio.h>

void examTime(char ch)
{
	if( ch =='A' || ch =='a')
	{
		printf("your exam time at 7 AM");
	}
	if(ch =='B'|| ch=='b')
	{
		printf("your exm time at 8.30 AM");
	}
	if(ch =='C' || ch=='c')
	{
		printf("your exam time at 9.20 AM");
	}
	if(ch =='D' || ch=='d')
	{
		printf("your exam time at 10.30");
	}
	if((ch >='E' && ch<='Z') || (ch>='e' && ch <= 'z'))
	{
		printf("ERROR : Inavlid Division");
	}
}
int main()
{
	char cValue='\0';
	
	printf("Enter Character");
	scanf("%c",&cValue);
	
	examTime(cValue);
	
	return 0;
}

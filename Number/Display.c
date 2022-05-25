#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description :   Display Statement
//  Input :         Integer
//  Output :        --
//  Date :          12/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

void Display(int iNo)
{
	register int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
		
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("Jay Shri Ganesh\n");
	}
}

/////////////////////////////////////////////////////////////////////
// Write a program to Display The Jay Ganesh Statement.
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}
#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayFactor
//  Description :   Display the factor of number.
//  Input :         Integer
//  Output :        --
//  Date :          13/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

void DisplayFactor(int iNo)
{
	register int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			printf("%d\t",iCnt);
		}
	}
} 
/////////////////////////////////////////////////////////////////////
// Write a program accept number form user and display factor.
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	return 0;
}
////////////////////////////////////////////////////////
// Input:   10
// Output:  1	2	5
//
// Input:   -10
// Output:  1	2	5
//////////////////////////////////////////////////////
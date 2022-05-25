#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayNonFactor
//  Description :   Display Non Factor of number.
//  Input :         Integer
//  Output :        --
//  Date :          13/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

void DisplayNonFactor(int iNo)
{
	register int iCnt=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		if((iNo%iCnt)!=0)
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
	
	DisplayNonFactor(iValue);
	return 0;
}
////////////////////////////////////////////////////////
// Input:   10
// Output:  3	4	6	7	8	9
//
// Input:    -6
// Output:   4	5
//////////////////////////////////////////////////////
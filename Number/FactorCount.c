#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  FactorCount
//  Description :   Calculate the factor number.
//  Input :         Integer
//  Output :        Integer
//  Date :          14/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

int FactorCount(int iNo)
{
	register int iCnt=0;
	int iCount=0;
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iCount++;
		}
	}
	return iCount;
} 
/////////////////////////////////////////////////////////////////////
// Write a program accept number form user and Calculate the number of Factor.
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0,iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=FactorCount(iValue);
	printf("The Count of factor is:%d",iRet);
	
	return 0;
}
////////////////////////////////////////////////////////
// Input:   10
// Output:  1	2	5
//
// Input:   -10
// Output:  1	2	5
//////////////////////////////////////////////////////
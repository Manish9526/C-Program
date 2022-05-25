#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  SumFactor
//  Description :   To perform the Sumamtion of Factor.
//  Input :         Integer
//  Output :        Integer
//  Date :          13/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

int SumFactor(int iNo)
{
	register int iCnt=0;
	int iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
} 
/////////////////////////////////////////////////////////////////////
// Write a program to perform Summation of factor.
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0,iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=SumFactor(iValue);
	printf("The Summation of factor is:%d",iRet);
	return 0;
}
////////////////////////////////////////////////////////
// Input:   10
// Output:  8
//
// Input:   -20
// Output:  22
//////////////////////////////////////////////////////
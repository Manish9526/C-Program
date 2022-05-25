#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Summation
//  Description :   Used to perform Summation of N Number.
//  Input :         Integer, Integer
//  Output :        Integer
//  Date :          12/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

int Summation(int iNo)
{
	register int iCnt=0;
	auto int iSum=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iSum=iSum+iCnt;
	}
	return iSum;
}
/////////////////////////////////////////////////////////////////////
// Write a program to perform Summation of N number
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0;
	auto int iRet=0;
	
	printf("Enter the  number\n");
	scanf("%d",&iValue);
	
	iRet=Summation(iValue);
	
	printf("Summation of %d is =%d",iValue,iRet);
	return 0;
}
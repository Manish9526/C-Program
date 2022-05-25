#include<stdio.h>
typedef unsigned long int ULI;
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Power
//  Description :   Calculate the power of number.
//  Input :         Integer, Integer
//  Output :        Integer
//  Date :          15/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

ULI Power(int iNo1,int iPow)
{
	 register int iCnt=0;
	 ULI iMult=1;
	 
	for(iCnt=1;iCnt<=iPow;iCnt++)
	{
		iMult=iMult*iNo1;
	}
	return iMult;
}
/////////////////////////////////////////////////////////////////////
// Write a program to perform Calculate power of n number.
/////////////////////////////////////////////////////////////////////

int main()
{
	ULI iRet=0;
	auto int iValue=0,iPow=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	printf("Enter the power \n");
	scanf("%d",&iPow);
	
	iRet=Power(iValue,iPow);
	printf("%d ^ %d =%d\n",iValue,iPow,iRet);
	return 0;
}

//////////////////////////////////////////////////////////////////////
// Input: 2^2
// Output 4
////////////////////////////////////////////////////////////////////
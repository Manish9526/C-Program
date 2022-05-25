#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  SumationDigit
//  Description :   Summation of the all digit.
//  Input :         Integer
//  Output :        Integer
//  Date :          14/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

int SumationDigit(int iNo)
{
	int iSum=0;
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{	
		iDigit=iNo%10;
		
		iSum=iSum+iDigit;
		
		iNo=iNo/10;
	}
	return iSum;
}
/////////////////////////////////////////////////////////////////////
// Write a program to perform Summation of digit.
/////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	iRet=SumationDigit(iValue);
	printf("The Summation of Digit is :%d",iRet);
	return 0;
}

/////////////////////////////////////////////
// Input : 1234
// Output: 10
/////////////////////////////////////////////
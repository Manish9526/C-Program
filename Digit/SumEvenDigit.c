#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  SumEvnDigit
//  Description :   Summation of the Even digit.
//  Input :         Integer
//  Output :        Integer
//  Date :          15/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

int SumEvnDigit(int iNo)
{
	int iDigit=0,iSum=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			iSum=iSum+iDigit;
		}
		iNo=iNo/10;
	}
	return iSum;

	
}
/////////////////////////////////////////////////////////////////////
// Write a program to perform Summation of Even digit.
/////////////////////////////////////////////////////////////////////
int main()
{
	auto int iValue=0,iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=SumEvnDigit(iValue);
	printf("The Sumation of even Number is:%d",iRet);
	
	return 0;
}
/////////////////////////////////////////////
// Input :  123456
// Output:  12
//
// Input :  -357
// Output:  0
//
/////////////////////////////////////////////
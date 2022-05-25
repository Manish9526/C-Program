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
int Reverse(int iNo)
{
	int iDigit=0,iRev=0;
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	return iRev;
}

/////////////////////////////////////////////////////////////////////
// Write a program to perform Summation of Even digit.
/////////////////////////////////////////////////////////////////////
int main()
{
	auto int iValue=0,iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=Reverse(iValue);
	
	printf("The Reverse Number is:%d",iRet);
	
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
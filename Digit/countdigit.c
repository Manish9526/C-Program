#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CountDigit
//  Description :   calculate the digit count.
//  Input :         Integer
//  Output :        Integer
//  Date :          13/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

int CountDigit(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{	
		iCnt++;
		iNo=iNo/10;
	}
	return iCnt;
}
/////////////////////////////////////////////////////////////////////
// Write a program  display digit Count.
/////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0,iRet=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	iRet=CountDigit(iValue);
	printf("The count of Digit is :%d",iRet);
	return 0;
}

/////////////////////////////////////////////
// Input : 7856
// Output: 4
/////////////////////////////////////////////

#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: SumNonFact
// Discription:   perfrom the factor and summation of non factor.
// Input:		  Integer
// Output:		  Integer
// Author:		  Manish Ghalme
// Date:		  16/4/2021.
//
/////////////////////////////////////////////////
int SumNonFact(int iNo)
{
	int iCnt=0;
	int iSum=0;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo % iCnt)!=0)
		{
			iSum=iSum+iCnt;
		}
	}
	return iSum;
}
///////////////////////////////////////////////////////
// Write a program which accept number from user and 
//          return Summation of all its non factor.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=SumNonFact(iValue);
	
	printf("The summation of non factor is: %d",iRet);
	return 0;
}
/////////////////////////////////////////
// Input:  12
// output: 50
////////////////////////////////////////
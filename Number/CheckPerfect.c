#include<stdio.h>
#include<stdbool.h>
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
bool CheckPerfect(int iNo)
{
	register int iCnt=0;
	int iTemp=0,iSum=0;
	iTemp=iNo;
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo%iCnt)==0)
		{
			iSum=iSum+iCnt;
		}
	}
	printf("%d",iSum);
	
	if(iSum==iTemp)
	{
		return true;
	}
	else
	{
		return false;
	}
}
/////////////////////////////////////////////////////////////////////
// Write a program to perform Summation of factor.
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0;
	bool bRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=CheckPerfect(iValue);
	
	if(bRet==true)
	{
		printf("The %d number is perfecat",iValue);
	}
	else
	{
		printf("The %d number is not perfacte\n",iValue);
	}
	return 0;
}
////////////////////////////////////////////////////////
// Input:   10
// Output:  8
//
// Input:   -20
// Output:  22
//////////////////////////////////////////////////////
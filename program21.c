#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: FactDiff
// Discription:   perfrom the factor the differance 
//				  between factor and non factor.
// Input:		  Integer
// Output:		 Integer
// Author:		  Manish Ghalme
// Date:		  20/4/2022.
//
/////////////////////////////////////////////////
int FactDiff(int iNo)
{
	int iCnt=0;
	int iSumFact=0;
	int iSumNon=0;
	
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			iSumFact=iSumFact+iCnt;
		}
		else if((iNo % iCnt)!=0)
		{
			iSumNon=iSumNon+iCnt;
		}
	}
	return (iSumFact-iSumNon);
}
///////////////////////////////////////////////////////
// Accept number from user and return differance betwwen 
//          summation of all factor and non factor.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=FactDiff(iValue);
	
	printf("The differance of summation Factor and Nonfactor is:%d\n ",iRet);
	return 0;
}
/////////////////////////////////////////
// Input:  12
// output:  -34  (16 - 50)
////////////////////////////////////////
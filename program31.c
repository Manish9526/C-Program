#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: 
// Discription:   
// Input:		  
// Output:		 
// Author:		  Manish Ghalme
// Date:		  16/4/2021.
//
/////////////////////////////////////////////////
int CountDiff(int iNo)
{
	int iSumEven=0;
	int iSumOdd=0;
	int iDigit =0;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo %10;
		if((iDigit %2)==0)
		{
			iSumEven=iSumEven+iDigit;
		}
		else if((iDigit %2)!=0)
		{
			iSumOdd=iSumOdd+iDigit;
		}
		
		iNo=iNo/10;
	}
	
	return (iSumEven - iSumOdd);
}
///////////////////////////////////////////////////////
// Accpet number from user and return differance between
//   summation of even digit and Summation of odd digit.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet= 0;
	
	printf("Enter the numberr\n");
	scanf("%d",&iValue);
	
	iRet=CountDiff(iValue);
	printf("%d",iRet);
	return 0;
}
/////////////////////////////////////////
// Input:  2395
// output: -15 (2-17).
////////////////////////////////////////
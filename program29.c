#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: CountOdd
// Discription:   Counting odd digit
// Input:		  Integer
// Output:		  Integer
// Author:		  Manish Ghalme
// Date:		  16/4/2021.
//
/////////////////////////////////////////////////
int CountOdd(int iNo)
{
	int iCnt=0;
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo %10;
		
		if((iDigit %2)!=0)
		{
			iCnt++;
		}
		
		iNo= iNo/10;
	}
	
	return iCnt;
}
///////////////////////////////////////////////////////
//Accept numbere from user and return the count of  
//          odd digit.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=CountOdd(iValue);
	
	printf("%d",iRet);
	
	return 0;
}
/////////////////////////////////////////
// Input:  2395
// output: 3
////////////////////////////////////////
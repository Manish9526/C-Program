#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name:  CountEven
// Discription:    Counting the even digit.
// Input:		   Integer
// Output:		   Integer
// Author:		   Manish Ghalme
// Date:		   15/4/2021.
//
/////////////////////////////////////////////////
int CountEven( int iNo)
{
	int iCnt=0;
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	while(iNo!=0)
	{
		iDigit=iNo % 10;
		
		if((iDigit%2)==0)
		{
			iCnt++;
		}
		
		iNo=iNo/10;
	}
	
	return iCnt;
}
///////////////////////////////////////////////////////
// Accept number from user and return count of even 
//          digit.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=CountEven(iValue);
	printf("%d",iRet);
	return 0;
}
/////////////////////////////////////////
// Input:  2395
// output: 1
////////////////////////////////////////
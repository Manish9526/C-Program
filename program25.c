#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: Count
// Discription:   counting the frequency of digit less the 6.
// Input:		  Integer.
// Output:		  Integer.
// Author:		  Manish Ghalme
// Date:		  20/4/2021.
//
/////////////////////////////////////////////////
int Count(int iNo)
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
		
		if(iDigit<6)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	
	return iCnt;
}
///////////////////////////////////////////////////////
// Accept number from user and count frequency of such
//          digit which are less then 6
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=Count(iValue);
	
	printf("%d",iRet);
	return 0;
}
/////////////////////////////////////////
// Input:  2395
// output:  3
////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name:  CountTwo
// Discription:    Count frequency of 2.
// Input:		   Integer
// Output:		   Integer
// Author:		   Manish Ghalme
// Date:		   13/4/2021.
//
/////////////////////////////////////////////////
int CountTwo(int iNo)
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
		if(iDigit==2)
		{
			iCnt++;
		}
		iNo=iNo /10;
	}
	
	return iCnt;
}
///////////////////////////////////////////////////////
// Accept number from user and count frequency of 2 in it.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	iRet=CountTwo(iValue);
	
	printf("%d ",iRet);
	return 0;
}
/////////////////////////////////////////
// Input:  2395
// output: 1
////////////////////////////////////////
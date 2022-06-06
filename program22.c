#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////
//
// Function Name:  CheckZero
// Discription:   cheacking given number contain zero or note.
// Input:		  Integer
// Output:		  boolean.
// Author:		  Manish Ghalme
// Date:		  8/4/2021.
//
/////////////////////////////////////////////////
bool CheckZero(int iNo)
{
	int iDigit=0;
	int iCnt=0;
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	iCnt=1;
	
	while(iNo!=0)
	{
		iDigit=iNo %10;
		
		if(iDigit<1)
		{
			iCnt--;
			break;
		}
		
		iNo=iNo /10;
	}
	
	if(iCnt==0)
	{
		return true;
	}
	else
	{
		return false;
	}
	
}
///////////////////////////////////////////////////////
// Accept number from user and check whether it contain 
//		0 in it or not.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	bool bRet=false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=CheckZero(iValue);
	
	if(bRet==true)
	{
		printf("It conatain zero");
	}
	else
	{
		printf("There Notzero");
	}
	return 0;
}
/////////////////////////////////////////
// Input:   2395
// output:  There is no zero.
// Input:   9000
// output:  There is zero.
////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: MultDigits 
// Discription:   Multipliction of all digit
// Input:		  Integer
// Output:		  Ineteger
// Author:		  Manish Ghalme
// Date:		  16/4/2021.
//
/////////////////////////////////////////////////
int MultDigits(int iNo)
{
	int iDigit=0;
	int iFactMult=0;
	
	iFactMult=1;
	if(iNo<0)
	{
		iNo= - iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo % 10;
		
		if(iDigit!=0)
		{
			iFactMult=iFactMult*iDigit;
		}
		
		iNo=iNo/10;
	}
	
	return iFactMult;
}
///////////////////////////////////////////////////////
//Accept number from user and return the multiplication 
//          of all digit.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=MultDigits(iValue);
	printf("%d",iRet);
	
	return 0;
}
/////////////////////////////////////////
// Input:  2395
// output: 270
////////////////////////////////////////
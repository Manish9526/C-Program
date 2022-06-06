#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name:  CountRang
// Discription:   counting the number between3 to 7.
// Input:		  Integer
// Output:		  Interger
// Author:		  Manish Ghalme
// Date:		  15/4/2021.
//
/////////////////////////////////////////////////
int CountRang(int iNo)
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
		
		if((iDigit>3)&&(iDigit<7))
		{
			iCnt++;
		}
		iNo=iNo /10;
	}
	
	return iCnt;
	
	
}
///////////////////////////////////////////////////////
// Accept number from user and return the count of digit 
//          in between 3 to 7.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=CountRang(iValue);
	
	printf("%d",iRet);
	return 0;
}
/////////////////////////////////////////
// Input:  2395
// output: 1
////////////////////////////////////////
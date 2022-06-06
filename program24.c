#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: CountFour 
// Discription:   counting the frequency of 4 number contain
// Input:		  Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  16/4/2021.
//
/////////////////////////////////////////////////
int CountFour(int iNo)
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
		
		if(iDigit==4)
		{
			iCnt++;
		}
		iNo=iNo/10;
	}
	
	return iCnt;
}
///////////////////////////////////////////////////////
//Accept number from user and count frequency of 4in it 
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	printf("Entre the number\n");
	scanf("%d",&iValue);
	
	iRet=CountFour(iValue);
	
	printf("%d",iRet);
	return 0;
}
/////////////////////////////////////////
// Input:  954324
// output: 2
////////////////////////////////////////
#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: MultFact
// Discription:   Multipliction of factor
// Input:		  Integer
// Output:		  Integer
// Author:		  Manish Ghalme
// Date:		  4/2/2021.
//
/////////////////////////////////////////////////
int MultFact(int iNo)
{
	int iCnt=0;
	int iMult=1;
	
	if(iNo<0)
	{
		iNo = -iNo;
	}
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			iMult=iMult*iCnt;
		}
	}
	return iMult;
	
}
///////////////////////////////////////////////////////
// Accept number from user and display multiplication 
//          of factor
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iRet=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	iRet=MultFact(iValue);
	printf("multilication of factor is :%d",iRet);
	return 0;
}
/////////////////////////////////////////
// Input:  12
// output: 144(1*2*3*4*6)
////////////////////////////////////////
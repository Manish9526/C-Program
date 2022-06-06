#include<stdio.h> 
/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Display the Pattern
// Input:		  Integer
// Output:		  Integer
// Author:		  Manish Ghalme
// Date:		  4/2/2022.
//
/////////////////////////////////////////////////
void Display(int iNo)
{
	int iCnt=0,iSum=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iSum=2*iCnt;
		printf(" %d",iSum);
	}
}
///////////////////////////////////////////////////////////////////
//Accept number from number from user nad display pattern below
///////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	
	printf("Enter the numbem\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	
	return 0;
}
/////////////////////////////////////////////
//input:8
//out pute: 2 4 6 8 10 12 14 16.
/////////////////////////////////////////////


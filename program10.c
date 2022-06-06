#include<stdio.h>

/////////////////////////////////////////////////
//
// Function Name: PrintEvan
// Discription:   display the even number of given number
// Input:		  integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  4/2/2022
//
/////////////////////////////////////////////////
void PrintEvan(int iNo)
{
	int iCnt=0;
	int iSum=0;
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		iSum=2*iCnt;
		printf(" %d",iSum);
	}
}
/////////////////////////////////////////////////////////
// Accept N number from user and print that number of even
//			numbers on Scren.
////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	PrintEvan(iValue);
	
	return 0;
}
////////////////////////////////////////////////////////////
// Input:  7
// output: 2 4 6 8 10 12 14
////////////////////////////////////////////////////////////

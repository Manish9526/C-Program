#include<stdio.h>

/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Display the Pattern
// Input:		  Integer
// Output:		  ---
// Author:		  Manish Ghalme
// Date:		  8/2/2022.
//
/////////////////////////////////////////////////
void Display(int iNo)
{
	int iCnt=1;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("%d\t*\t",iCnt);
	}
	
}
/////////////////////////////////////////////////////////////////////
//Accept number from number from user nad display pattern below
/////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	printf("Enter th enumber\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
/////////////////////////////////////////////////
//input:5
//out pute: 1 * 2 * 3 * 4 * 5 * 
////////////////////////////////////////////////


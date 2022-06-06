
#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Display the pattern.
// Input:		  Integer
// Output:		  ---
// Author:		  Manish Ghalme
// Date:		  6/2/2022.
//
/////////////////////////////////////////////////
void Display(int iRow,int iCol)
{
	int iCnt1=0,iCnt2=0;
	
	for(iCnt1=1;iCnt1<=iRow;iCnt1++)
	{
		for(iCnt2=1;iCnt2<iCol;iCnt2++)
		{
			printf("*\t");
		}
		printf("\n");
	}
	
}
///////////////////////////////////////////////////////////////////////////////
//Accept number of row and number of colume from usr and display below pattern.
///////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the  number of row\n");
	scanf("%d",&iValue1);
	
	printf("Enter the number of colume\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
///////////////////////////////////////
//input: Row =4   col=3
//output:
/*
	* * * *
	* * * *
	* * * *
	* * * *
*/
///////////////////////////////////////
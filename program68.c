#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Display the Pattern
// Input:		  Integer,Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  10/2/2022.
//
/////////////////////////////////////////////////

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			printf("%d\t",j);
		}
		printf("\n");
	}
}
/////////////////////////////////////////////////////////////////////////////////
//Accept number of row and number of colume from usr and display below pattern.
//////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the number of Row\n");
	scanf("%d",&iValue1);
	
	printf("Enter the number of colume\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
//////////////////////////////////////////
//input: iRow=3, iCol=5;
//output:
/*
	5 4 3 2 1 
	5 4 3 2 1 
	5 4 3 2 1 
*/
//////////////////////////////////////////
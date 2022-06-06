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
		for(j=1;j<=iCol;j++)
		{
			printf(" %d",i);
		}
		printf("\n");
	}
	
}
/////////////////////////////////////////////////////////////////////////////////
//Accept number of row and number of colume from usr and display below pattern.
/////////////////////////////////////////////////////////////////////////////////

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
///////////////////////////////////////////
//input: Row=3  Col=4;
//output:
/*
	1 1 1 1
	2 2 2 2
	3 3 3 3
	4 4 4 4 
*/
//////////////////////////////////////////////
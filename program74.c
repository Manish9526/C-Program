#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Display the Pattern.
// Input:		  Integer, Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  15/2/2022.
//
/////////////////////////////////////////////////
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%d\t",i);
		}
		printf("\n");
	}
}
//////////////////////////////////////////////////////////////////////////////////
//Accept number of row and number of columns from user and display below pattern.
////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Eneter the number of Row\n");
	scanf("%d",&iValue1);
	
	printf("Enter the number of column\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	
	return 0;
}
////////////////////////////////////////////////
// Input: Row=4   col=5
// Output:
/*
	4 4 4 4 
	3 3 3 3
	2 2 2 2
	1 1 1 1
*/
/////////////////////////////////////////////////
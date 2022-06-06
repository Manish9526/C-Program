
#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Display the Pattern.
// Input:		  Integer,Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  18/2/2022.
//
/////////////////////////////////////////////////

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=iRow;i>=1;i--)
	{
		for(j=1;j<=i;j++)
		{
			printf(" *");
		}
		printf("\n");
	}
	
}
/////////////////////////////////////////////////////////////////////////////////
//Accept number of Row and number of column from user and Display below pattern.
//////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the number of Row and column\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
/////////////////////////////////////////////
// Input: Row= 4  col=4
// Output :
/*
	* * * *
	* * *
	* *
	*
*/
////////////////////////////////////////////
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
	int i=0,j=0,k=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,k=1;j<=iCol;j++,k++)
		{
			if((i%2)!=0)
			{
			   printf(" %d",j*2);
			}
			else
			{
				printf(" %d",k);
				k++;
			}
		}
		printf("\n");	
	}
}
//////////////////////////////////////////////////////////////////////////////////
//Accept number of Row and number of column from user and Display below pattern.
/////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the number of Row and Column\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
///////////////////////////////////////////
// Input: Row= 4  col=5
// Output :
/*
	2 4 6 8 10
	1 3 5 7 9
	2 4 6 8 10
	1 3 5 7 9
*/
//////////////////////////////////////////
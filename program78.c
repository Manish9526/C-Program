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
	int i=0,j=0,iNo=1;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1,iNo=-1;j<=iCol;j++,iNo--)
		{
			if((i%2)==0)
			{
				printf("%d\t",iNo);
			}
			else
			{
				printf("%d\t",j);
			}
		}
		printf("\n");
		
	}
	
	
}
///////////////////////////////////////////////////////////////////////////////
//Accept number of Row and number of column from user and Display below pattern.
//////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the number of Row And Column\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
/////////////////////////////////////////////////////
// Input: Row=5   col=5
// Output :
/*
	1  2  3  4  5
   -1 -2 -3 -4 -5
	1  2  3  4  5
   -1 -2 -3 -4 -5
	1  2  3  4  5
*/
////////////////////////////////////////////////////
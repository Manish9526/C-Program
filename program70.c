#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: Display 
// Discription:   Display the Pattern
// Input:		  Integer,Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  7/2/2022.
//
/////////////////////////////////////////////////
void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			printf("%c\t",'A'-1+j);
		}
		printf("\n");
	}
	
}
///////////////////////////////////////////////////////////////////////////////////
//Accept number of row and number of columns from user and display below pattern.
////////////////////////////////////////////////////////////////////////////////////

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the number of Row\n");
	scanf("%d",&iValue1);
	
	printf("Enter the number of Column\n");
	scanf("%d",&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
/////////////////////////////////////////
// Input: Row=4  Col=4
// Output:
/*
	A B C D 
	A B C D 
	A B C D 
	A B C D 
*/
//////////////////////////////////////////
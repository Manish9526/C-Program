#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Display the Pattern.
// Input:		  Integer ,Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  3/3/2022.
//
/////////////////////////////////////////////////

void Display(int iRow,int iCol)
{
	int i=0,j=0;
	
	if(iRow!=iCol)
	{
		return;
	}
	
	for(i=1;i<=iRow;i++)
	{
		for(j=iCol;j>=1;j--)
		{
			if((i==j)||(i==iRow)||(j==iCol)||(i==1)||(j==1))
			{
				printf(" *");
			}
			else
			{
				if(i<j)
				{
					printf(" #");
				}
				else
				{
					printf(" $");
				}
			}
		}
		printf("\n");
	}
}
///////////////////////////////////////////////////////
//Accept number of Row and number of column from user and 
//Display below pattern.
//////////////////////////////////////////////////////

int main()
{
	int iValue1=0,iValue2=0;
	
	printf("Enter the number of Row and Colume\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
//////////////////////////////////////////////////
// Input: Row= 6  col=6
// Output :
/*
	* * * * * * 
	* # # # * * 
	* # # * $ * 
	* # * $ $ * 
	* * $ $ $ * 
	* * * * * * 
*/
/////////////////////////////////////////////////////
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
	int i=0,j=0,iCnt=0;
	
	for(i=1;i<=iRow;i++)
	{
		for(j=1;j<=iCol;j++)
		{
			iCnt++;
			if((iCnt%9)==0)
			{
				printf("9\t");
				iCnt=0;
			}
			else
			{
				printf("%d\t",iCnt );
			}
		
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
	
	printf("Enter the number of Row and Column\n");
	scanf("%d %d",&iValue1,&iValue2);
	
	Display(iValue1,iValue2);
	
	return 0;
}
////////////////////////////////////////////////////
// Input: Row= 4  col=4
// Output :
/*
	1 2 3 4
	5 6 7 8
	9 1 2 3 
	4 5 6 7
*/
//(((i*iCol)+j+1)%9==0) extra condtion
/////////////////////////////////////////////////////////
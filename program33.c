#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: FactRev
// Discription:   factor in reverce order.
// Input:		  Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  16/4/2021.
//
/////////////////////////////////////////////////
void FactRev(int iNo)
{
	int iCnt=0;
	
	for(iCnt=(iNo-1);iCnt>0;iCnt--)
	{
		if((iNo % iCnt)==0)
		{
			printf(" %d",iCnt);
		}
	}
	
}
///////////////////////////////////////////////////////
//Accept number from user and display its factor in  
//          decreasing order
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	FactRev(iValue);
	
	return 0;
	
}
/////////////////////////////////////////
// Input:  12
// output:  6 4 3 2 1 
////////////////////////////////////////

#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Display the pattern.
// Input:		  Integer
// Output:		  Integer
// Author:		  Manish Ghalme
// Date:		  4/2/2022.
//
/////////////////////////////////////////////////
void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("# %d *\t",iCnt);
		
	}
	
}
///////////////////////////////////////////////////////////////////////
//Accept number from number from user nad display pattern below
///////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
/////////////////////////////////////////////
//input:4
//out pute: # 1 * # 2 * # 3 * # 4 * 
/////////////////////////////////////////
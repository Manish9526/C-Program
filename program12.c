#include<stdio.h>


/////////////////////////////////////////////////
//
// Function Name:  DisplayFactor
// Discription:   Display the factor.
// Input:		  intger
// Output:		  --
// Author:		  Manish Ghalme
// Date:		 4/2/2022
//
/////////////////////////////////////////////////
void DisplayFactor(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if((iNo % iCnt)==0)
		{
			printf(" %d",iCnt);
		}
	}
}
/////////////////////////////////////////////////////////
// Accept number from user and print even factor
////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	DisplayFactor(iValue);
	
	return 0;
}
////////////////////////////////////////////////////////////
// Input:  24
// output: 1 2 4 6 8 12
////////////////////////////////////////////////////////////

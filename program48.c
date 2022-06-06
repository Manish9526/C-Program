#include<stdio.h>

///////////////////////////////////////////////////////
//////////////////////////////////
//
// Function Name: Display
// Discription:   Accept number and print *
// Input:         Integer
// Output:        Nothing
// Date:          19/04/2022
// Author:        Ghalme Manish Sahadev
//
//////////////////////////////////////////////////////
/////////////////////////////////

void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=iNo;iCnt++)
	{
		printf("*\n");
	}
}

////////////////////////////////////////////////////////
// Accept one number from user and print that number of"*" on screen
///////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	return 0;
}
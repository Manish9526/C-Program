#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: DisplayNonFact
// Discription:   Display the non factor of number
// Input:		  Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  16/4/2021.
//
/////////////////////////////////////////////////
void DisplayNonFact(int iNo)
{
	int iCnt=0;
	for(iCnt=1;iCnt<iNo;iCnt++)
	{
		if((iNo % iCnt)!=0)
		{
			printf(" %d",iCnt);
		}
	}
}
///////////////////////////////////////////////////////
//Accept number from user and display all ite non factor 
////////////////////////////////////////////////////////
int main()
{
	int iValue=0;
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	DisplayNonFact(iValue);
	return 0;
}
/////////////////////////////////////////
// Input:  12
// output: 5 7 8 9 10 11
////////////////////////////////////////
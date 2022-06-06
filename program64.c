#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Display the pattern.
// Input:		  Integer
// Output:		  Integer
// Author:		  Manish Ghalme
// Date:		  9/2/2022.
//
/////////////////////////////////////////////////
void Display(int iNo)
{
	int iCnt=0;
	
	for(iCnt=iNo;iCnt>=1;iCnt--)
	{
		printf("%d\t#\t",iCnt);
	}
}
///////////////////////////////////////////////////////
//Aceept number from usr and display blow pattern
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	printf("Emter the number \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	
	return 0;
}
//////////////////////////////////////////
//input:5
//output:5 # 4 # 3 # 2 # 1 #
///////////////////////////////////////

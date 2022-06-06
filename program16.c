#include<stdio.h>

///////////////////////////////////////////////////////
//////////////////////////////////
//
// Function Name: Display
// Discription:   Print first number in second number time
// Input:         Integer,Integer
// Output:        Nothing
// Date:          19/04/2022
// Author:        Ghalme Manish Sahadev
//
//////////////////////////////////////////////////////
/////////////////////////////////

void Display( int iNo,int iFrequency)
{
	int i=0;
	
	if(iFrequency<0)
	{
		iFrequency= -iFrequency;
	}
	
	for(i=1;i<=iFrequency;i++)
	{
		printf("%d\t",iNo);
	}
}

////////////////////////////////////////////////////////
//////////////////////////////
// Accept two number from user and display first 
//   number in second number of time
///////////////////////////////////////////////////////
//////////////////////////////

int main()
{
	int iValue=0;
	int iCount=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	printf("Enter frequency\n");
	scanf("%d",&iCount);
	
	Display(iValue,iCount);
	
	return 0;
}
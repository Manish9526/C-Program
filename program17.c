#include<stdio.h>

///////////////////////////////////////////////////////
//////////////////////////////////
//
// Function Name: Display
// Discription:   Less than 10 print hello otherwise print demo
// Input:         Integer
// Output:        Nothing
// Date:          19/04/2022
// Author:        Ghalme Manish Sahadev
//
//////////////////////////////////////////////////////
/////////////////////////////////

void Display(int iNo)
{
	if(iNo<10)
	{
		printf("Hello\n");
	}
	else
	{
		printf("Demo\n");
	}
}

////////////////////////////////////////////////////////
//////////////////////////////
// Accept on number from user if number is lss than 10
// then print "hello" otherwise print "demo"
///////////////////////////////////////////////////////
//////////////////////////////

int main()
{
	int iValue=0;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
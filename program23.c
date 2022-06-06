#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Display the digit.
// Input:		  Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  16/4/2021.
//
/////////////////////////////////////////////////
void Display(int iNo)
{
	int iDigit =0;
	
	if(iNo<0)
	{
		iNo= -iNo;
	}
	
	while(iNo!=0)
	{
		iDigit=iNo %10;
		printf("%d\n",iDigit);
		
		iNo=iNo/10;
	}
	
}
///////////////////////////////////////////////////////
// Accept nimber from user and display its digits in 
//          reverce order.         
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
/////////////////////////////////////////
// Input:  2395
// output:  5 9 3 2
////////////////////////////////////////
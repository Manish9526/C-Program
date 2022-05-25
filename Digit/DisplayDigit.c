#include<stdio.h>


/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DisplayDigit
//  Description :   Display the digit of given number.
//  Input :         Integer
//  Output :        ----
//  Date :          14/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

void DisplayDigit(int iNo)
{
	register int iCnt=0;
	int iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{	
		iDigit=iNo%10;
		printf("%d\n",iDigit);
		iNo=iNo/10;
	}
}
/////////////////////////////////////////////////////////////////////
// Write a program to perform the display digit given number.
/////////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	DisplayDigit(iValue);
	return 0;
}

/////////////////////////////////////////////
// Input : 7856
// Output:
//  		7
//			8
//			5
//			6
/////////////////////////////////////////////
#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  SumationDigit
//  Description :   Summation of the all digit.
//  Input :         Integer
//  Output :        Integer
//  Date :          14/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

void DisplayEvnDigit(int iNo)
{
	auto int iDigit=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{	
		iDigit=iNo%10;
		if((iDigit%2)==0)
		{
			printf("%d\n",iDigit);
		}
		else 
		{
			if(iDigit%2!=0)
			{
				printf("0");
				break;
			}
		}
		iNo=iNo/10;
	}
}
/////////////////////////////////////////////////////////////////////
// Write a program to perform Summation of digit.
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	DisplayEvnDigit(iValue);
	
	return 0;
}

/////////////////////////////////////////////
// Input :  123456
// Output:  2 4 6
//
// Input :  357
// Output:  0
//
/////////////////////////////////////////////
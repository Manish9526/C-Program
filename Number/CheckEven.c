#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Check
//  Description :   Check the number even or note.
//  Input :         Integer
//  Output :        bool
//  Date :          12/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

bool Check(int iNo)
{
	int Flag= false;
	
	if((iNo%2)==0)
	{
		Flag=true;
	}
	return Flag;
}
/////////////////////////////////////////////////////////////////////
// Write a program to  Check given number is Even or note
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0;
	bool bRet=false;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	bRet=Check(iValue);
	if(bRet==true)
	{
		printf("The %d number is evan\n",iValue);
	}
	else
	{
		printf("The %d number is odd\n",iValue);
	}
	return 0;
}
#include<stdio.h>
#define TRUE 1
#define FALSE 0
typedef int BOOL;

///////////////////////////////////////////////////////
//////////////////////////////////
//
// Function Name: ChkEven
// Discription:   Check accept number is even or odd
// Input:         Integer
// Output:        Integer
// Date:          19/04/2022
// Author:        Ghalme Manish Sahadev
//
//////////////////////////////////////////////////////
/////////////////////////////////

BOOL ChkEven(int iNo)
{
	if((iNo%2)==0)
	{
		return TRUE;
	}
	else
	{
		return FALSE;
	}
}

////////////////////////////////////////////////////////
//////////////////////////////
// Accept number from user and check whether number is 
// even or odd
///////////////////////////////////////////////////////
//////////////////////////////

int main()
{
	int iValue=0;
	BOOL bRet=FALSE;
	
	printf("Enter number\n");
	scanf("%d",&iValue);
	
	bRet=ChkEven(iValue);
	
	if(bRet==TRUE)
	{
		printf("The number is even\n");
	}
	else
	{
		printf("The number is odd\n");
	}
	
	return 0;
}
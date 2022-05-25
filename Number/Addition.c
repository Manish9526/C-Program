#include<stdio.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Addition
//  Description :   Used to perform addition of 2 numbers
//  Input :         Integer, Integer
//  Output :        Integer
//  Date :          12/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

int Addition(int iNo1,int iNo2)
{
	auto int iAns=0;
	iAns=iNo1+iNo2;
	return iAns;
}

/////////////////////////////////////////////////////////////////////
// Write a program to perform addition of 2 numbers
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue1=0,iValue2=0;
	auto int iRet=0;
	
	printf("Enter the two number\n");
	scanf("%d%d",&iValue1,&iValue2);
	
	iRet=Addition(iValue1,iValue2);
	
	printf("Addition of:%d",iRet);
	return 0;
}

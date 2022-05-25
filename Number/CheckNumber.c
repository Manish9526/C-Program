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

bool Check(int iNo,int iNo1,int iNo2)
{
	int Flag= false;
	
	if(((iNo%iNo1)==0)&&((iNo%iNo2)==0))
	{
		Flag=true;
	}
	return Flag;
}
/////////////////////////////////////////////////////////////////////
// Write a program to given number to Divisible by N number.
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0,iNo1=0,iNo2=0;
	bool bRet=false;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	printf("Enter the divisible number \n");
	scanf("%d%d",&iNo1,&iNo2);
	
	bRet=Check(iValue,iNo1,iNo2);
	if(bRet==true)
	{
		printf("The %d number is divisible by %d and %d\n",iValue,iNo1,iNo2);
	}
	else
	{
		printf("The %d number is not divisible by %d and %d\n",iValue,iNo1,iNo2);
	}
	return 0;
}
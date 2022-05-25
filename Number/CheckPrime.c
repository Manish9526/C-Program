#include<stdio.h>
#include<stdbool.h>
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  CheckPrime
//  Description :   Check whater given number is prime or not.
//  Input :         Integer
//  Output :        boolean
//  Date :          14/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////
bool CheckPrime(int iNo)
{
	bool Flag =true;
	register int  iCnt=0;
		
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	for(iCnt=2;iCnt<=(iNo/2);iCnt++)
	{
		if(iNo%iCnt==0)
		{
			Flag=false;
			break;
		}
	}
	return Flag;
}
/////////////////////////////////////////////////////////////////////
// Write a program Check whater number is prime or not.
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0;
	bool bRet=false;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	bRet=CheckPrime(iValue);
	
	if(bRet==true)
	{
		printf("%d is number is Prime\n",iValue);
	}
	else
	{
		printf("%d is number is not prime \n",iValue);
	}
	
	return 0;
}
////////////////////////////////////////////////////////
// Input:   3
// Output:  Number is prime.
//
// Input:   10
// Output:  Number is not Prime.
//////////////////////////////////////////////////////
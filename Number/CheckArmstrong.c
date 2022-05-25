#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkArmstrong
//  Description :   Check the number Armstrong or note.
//  Input :         Integer
//  Output :        bool
//  Date :          15/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////
bool ChkArmstrong(int iNo)
{
	register int iCnt=0;
	int iMult=0,iSum=0,iCount=0,temp=0,iDigit=0;
	temp=iNo;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}
	
	while(iNo!=0)
	{
		iCount++;
		iNo=iNo/10;
	}

	iNo=temp;
	while(iNo!=0)
	{
		
		iMult=1;
		
		iDigit=iNo%10;
		for(iCnt=1;iCnt<=iCount;iCnt++)
		{
			iMult=iMult*iDigit;
			printf("%d\n",iMult);
		}
		iSum=iSum+iMult;
		printf("%d\n\n",iSum);
		iNo=iNo/10;
	}
	
	
	if(iSum==temp)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/////////////////////////////////////////////////////////////////////
// Write a program check wheather given number is Armstrong or not.
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0;
	bool bRet=false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=ChkArmstrong(iValue);
	
	if(bRet==true)
	{
		printf("%d the number is Armstrong\n",iValue);
	}
	else
	{
		printf("%d number is not Armstrong\n",iValue);
	}
	return 0;
}

///////////////////////////////////////////////////////////////////
// Input:    9474
// Output:   Armstrong number.
//
// Input:    132
// Output:   not Armstrong number.
//////////////////////////////////////////////////////////////////
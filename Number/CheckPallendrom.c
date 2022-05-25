#include<stdio.h>
#include<stdbool.h>

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  ChkPallendrom
//  Description :   Check the number Pallendrome or note.
//  Input :         Integer
//  Output :        bool
//  Date :          15/04/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

bool ChkPallendrom(int iNo)
{
	auto int temp=0,iDigit=0,iRev=0;
	
	if(iNo<0)
	{
		iNo=-iNo;
	}

	temp=iNo;
	while(iNo!=0)
	{
		iDigit=iNo%10;
		iRev=iRev*10+iDigit;
		iNo=iNo/10;
	}
	if(temp==iRev)
	{
		return true;
	}
	else
	{
		return false;
	}
}

/////////////////////////////////////////////////////////////////////
// Write a program to given number to Divisible by N number.
/////////////////////////////////////////////////////////////////////

int main()
{
	auto int iValue=0;
	bool bRet=false;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	bRet=ChkPallendrom(iValue);
	
	if(bRet==true)
	{
		printf("%d number is Pallendrome\n",iValue);
	}
	else
	{
		printf("%d number is not pallendrom\n",iValue);
	}
	
	return 0;
}

///////////////////////////////////////////////////////////////////
// Input:    141
// Output:   pallendrom number.
//
// Input:    123
// Output:   not pallendrom number.
//////////////////////////////////////////////////////////////////
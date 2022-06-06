#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////
//
// Function Name: Frequncy
// Discription:   frequency of even number.
// Input:		  integer Array,integer.
// Output:		  integer
// Author:		  Manish Ghalme
// Date:		  16/5/2022.
//
/////////////////////////////////////////////////
int Frequncy(int Arr[], int iLength)
{
	int iCnt=0,FreCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
		{
			FreCnt++;
		}
	}
	
	return FreCnt;
}
///////////////////////////////////////////////////////
// Write a program which accept number from user and 
//          return frequency of even number.
//////////////////////////////////////////////////////
int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iCnt=0,iRet=0;
	
	printf("Enter the number of element\n");
	scanf("%d",&iValue);
	
	// Dynamic memory allocation
	ptr=(int *)malloc (iValue *sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("enter the element of Array\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Frequncy(ptr,iValue);
	printf("the frequency of 11 in array is: %d",iRet);
	
	return 0;
}
/////////////////////////////////////////
// Input  :  
//    N	  : 6
// Element: 85 66 3 80 93 88
// output : 3
////////////////////////////////////////
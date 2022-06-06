#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////
//
// Function Name: DiffSum
// Discription:   work on Array and perfrom the summation
//					of even and odd element retrun differance.
// Input:		  Integer Array,Integer.
// Output:		  Integer.
// Author:		  Manish Ghalme
// Date:		  1/4/2022.
//
/////////////////////////////////////////////////
int DiffSum(int Arr[],int iLength)
{
	int iCnt=0,iESum=0,iOSum=0,iDiff=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iESum=iESum+Arr[iCnt];
		}
		else if((Arr[iCnt]%2)!=0)
		{
			iOSum=iOSum+Arr[iCnt];
		}
	}
	iDiff=iESum-iOSum;
	
	return iDiff;
}
///////////////////////////////////////////////////////
// Accept n number from user and return differance 
//   between summation of even element and odd element.
//////////////////////////////////////////////////////
int main()
{
	auto int iSize=0;
	int *iptr=NULL;
	int iCnt=0,iRet=0;
	
	printf("Enter the number of Elemenat\n");
	scanf("%d",&iSize);
	
	iptr=(int *)malloc(iSize* sizeof(int));
	
	if(iptr==NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	
	
	if(iValue<0)
	{
		iValue= -iValue;
	}
	
	printf("Enter the number of array \n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter element %d :",iCnt+1);
		scanf("%d",&iptr[iCnt]);
	}
	
	iRet=DiffSum(iptr,iSize);
	printf("Result is :%d",iRet);
	
	free(iptr);
	return 0;
}
/////////////////////////////////////////
// Input:
//		 N : 6
//  Element: 85 66 3 80 93 88
// output: 53 (234- 181)
////////////////////////////////////////
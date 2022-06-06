#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////
//
// Function Name: SerachLastOccurence 
// Discription:   Find last Occurance of N number.
// Input:		  Integer Array,Integer,Integer
// Output:		  Integer
// Author:		  Manish Ghalme
// Date:		  1/2/2022.
//
/////////////////////////////////////////////////

int SerachLastOccurence(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=iLength-1;iCnt>=0;iCnt--)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	return iCnt;
}
///////////////////////////////////////////////////////
//Accept N number from user and accept one another  number as
//No return index of last occurence of tha No.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0,iCnt=0,iRet=0,iNo=0;
	int *ptr=NULL;
	
	printf("Enter the number of elemenet\n");
	scanf("%d",&iValue);
	
	ptr=(int*)malloc(iValue*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to allocted the memory");
	}
	
	printf("Enter the elmenet  of Array \n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter Search number\n");
	scanf("%d",&iNo);
	
	iRet=SerachLastOccurence(ptr,iValue,iNo);
	
	if(iRet== -1)
	{
		printf("The number not found\n");
	}
	else
	{
		printf(" %d index is: %d\n",iNo,iRet);
	}
	
	free(ptr);
	return 0;
}
/////////////////////////////////////////
// Input:  N:  6  No: 66
//   Element: 85 66 3 66 93 88
// output:    3
////////////////////////////////////////
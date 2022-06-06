//Accept  N number from user and accept one another number as No 
//Check wheather No is presrent or not.

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
/////////////////////////////////////////////////
//
// Function Name: Search
// Discription:   Check number is present or not in Arry
// Input:		  Integer Array,Integer,integer
// Output:		  Boolean
// Author:		  Manish Ghalme
// Date:		 1/2/2022.
//
/////////////////////////////////////////////////

bool Search(int Arr[],int iLength,int iNo)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			break;
		}
	}
	
	if(iCnt==iLength)
	{
		return false;
	}
	else
	{
		return true;
	}
	
}
///////////////////////////////////////////////////////
//Accept  N number from user and accept one another number as No 
//Check wheather No is presrent or not.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0,iCnt=0,iNo=0;
	int *ptr=NULL;
	bool bRet=false;
	
	printf("Enter the number of element\n");
	scanf("%d",&iValue);
	
	ptr=(int *)malloc(iValue*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the element of Array\n");
	for(iCnt+0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the if we are search\n");
	scanf("%d",&iNo);
	
	bRet=Search(ptr,iValue,iNo);
	
	if(bRet==true)
	{
		printf("%d is present\n",iNo);
	}
	else
	{
		printf("%d   Absent\n",iNo);
	}
	
	free(ptr);
	return 0;
}
/////////////////////////////////////////
// Input:  N: 6   No=66
//	 Element: 85 66 3 66 93 88
// output: True.
////////////////////////////////////////
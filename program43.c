

#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
//
// Function Name: Frequency
// Discription:   Calulate N number frequency.
// Input:		  integer
// Output:		  integer
// Author:		  Manish Ghalme
// Date:		  16/4/2021.
//
/////////////////////////////////////////////////
int Frequency(int Arr[],int iLength,int iNo)
{
	int iCnt=0,iFreCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==iNo)
		{
			iFreCnt++;
		}
	}
	return iFreCnt;
}
///////////////////////////////////////////////////////
//Accept N number from user and accept one another number  
//      as No, return frequency of No from it.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0,iCnt=0,iNo=0,iRet=0;
	int  *ptr=NULL;
	
	printf("Enter the number of element\n");
	scanf("%d",&iValue);
	
	ptr=(int *)malloc(iValue*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the element od Array\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter the fine Frequency \n ");
	scanf("%d",&iNo);
	
	iRet=Frequency(ptr,iValue,iNo);
	printf("The frequency %d number is : %d",iNo,iRet);
	
	return 0;
}
/////////////////////////////////////////
// Input  : 7
//    No  : 66
// Element: 85 66 3 80 66 88 90
// output : 2
////////////////////////////////////////
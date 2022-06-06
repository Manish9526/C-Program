#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
//
// Function Name: DiffFrequency
// Discription:   Calulate frequency of even number and odd number.
// Input:		  integer Array,Integer
// Output:		  integer
// Author:		  Manish Ghalme
// Date:		  21/4/2022.
//
/////////////////////////////////////////////////
int DiffFrequency(int Arr[],int iLength)
{
	int iCnt=0,iEvnCnt=0,iOddCnt=0,iDiff=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iEvnCnt++;
		}
		else
		{
			iOddCnt++;
		}
	}
	
	iDiff=iEvnCnt-iOddCnt;
	return iDiff;
}
///////////////////////////////////////////////////////
// Accept N number from user and return diffirance  
//   between frequency of even number and odd number.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0,iRet=0,iCnt=0;
	int *ptr=NULL;
	
	printf("Enter the numbert\n");
	scanf("%d",&iValue);
	
	ptr=(int*)malloc(iValue*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to allocate memory\n");
		return -1;
	}
	
	printf("Enter the element of Array\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=DiffFrequency(ptr,iValue);
	printf(" %d",iRet);
	
	free(ptr);
	
	return 0;
}
/////////////////////////////////////////
// Input  : 
//    N	  : 7
// Element: 85 66 3 80 93 88
// output : 1 (4-3)
////////////////////////////////////////
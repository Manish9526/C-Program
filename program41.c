#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

/////////////////////////////////////////////////
//
// Function Name: Check
// Discription:   Check N number is present or not.
// Input:		  Integer Array,Integer
// Output:		  Boolean
// Author:		  Manish Ghalme
// Date:		  21/4/2022.
//
/////////////////////////////////////////////////
bool Check(int Arr[],int iLength)
{
	int iCnt=0;

	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]==11)
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
// Accept n number from  user check whater that number 
//       contain 11 in it or not.
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int iCnt=0;
	int *ptr=NULL;
	bool bRet=false;
	
	printf("Enter the number of element\n");
	scanf("%d",&iValue);
	
	ptr=(int *)malloc(iValue*sizeof(int));
	
	printf("Enter the element of Array\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	bRet=Check(ptr,iValue);

	if(bRet==true)
	{
		printf("11 is present\n");
	}
	else
	{
		printf("11 is absent\n");
	}
	
	free(ptr);
	return 0;
	
}
/////////////////////////////////////////
// Input  : 6  
//    No  : 11
// Element: 85 66 11  80 93 88
// output : 11 is precent.
////////////////////////////////////////
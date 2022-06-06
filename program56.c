#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////
//
// Function Name: Minimum
// Discription:   Einfd smallest number and return.
// Input:		  Integer Array,Integer
// Output:		  Integer
// Author:		  Manish Ghalme
// Date:		  22/2/2022.
//
/////////////////////////////////////////////////

int Minimum(int Arr[],int iLength)
{
	int iCnt=0,iMin=0;
	
	iMin=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]<iMin)
		{
			iMin=Arr[iCnt];
		}
	}
	return iMin;
}
////////////////////////////////////////////////////////////
//Accept N number from  user and return the smallest number.
/////////////////////////////////////////////////////////////
int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iCnt=0;
	int iRet=0;
	
	printf("Enter the number of elmenet\n");
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
	
	iRet=Minimum(ptr,iValue);
	printf("the smallest number in Array is:%d",iRet);
	
	free(ptr);
	return 0;
}
/////////////////////////////////////////
// Input:  
//	    N: 6
//Element: 85 66 3 66 93 88
// output: 3
////////////////////////////////////////


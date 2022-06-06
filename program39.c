#include<stdio.h>
#include<stdlib.h>

/////////////////////////////////////////////////
//
// Function Name: CountEv
// Discription:   calulate Frequency of even number .
// Input:		  integer Array,intger
// Output:		  integer
// Author:		  Manish Ghalme
// Date:		  21/4/2022.
//
/////////////////////////////////////////////////
int CountEv(int Arr[],int iLength)
{
	int iCnt=0,iEvnCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)==0)
		{
			iEvnCnt++;
		}
	}
	
	return iEvnCnt;
}
//////////////////////////////////////////////////////////////////
//Accept N number from  uer and retrun frequency of even number .
//////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0,iCnt=0,iRet=0;
	int *ptr=NULL;
	
	printf("Enter the number\n");
	scanf("%d",&iValue);
	
	ptr=(int *)malloc (iValue*sizeof(int));
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
	
	iRet=CountEv(ptr,iValue);
	printf("The count of Evan number is :%d\n",iRet);
	
	
	return 0;
}
/////////////////////////////////////////
// Input  :  
//    N	  : 6
// Element: 85 66 3 80 93 88
// output : 3
////////////////////////////////////////
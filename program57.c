#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////
//
// Function Name: Diffirance 
// Discription:   Perfrom differanceof largest number and smallest 
// Input:		  Integer Array,Integer
// Output:		  Integer
// Author:		  Manish Ghalme
// Date:		  19/2/2022.
//
/////////////////////////////////////////////////

int Diffirance(int Arr[],int iLength)
{
	int iCnt=0,iMax=0,iMin=0;
	
	iMax=iMin=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
		else if(Arr[iCnt]<iMin)
		{
			iMin=Arr[iCnt];
		}
	}
	printf("%d",iMax);
	printf("%d",iMin);
	return (iMax-iMin);
}
///////////////////////////////////////////////////////
//Accept N number from user  and return differance between
//  largest and smallest number.
//////////////////////////////////////////////////////
int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iRet=0;
	int iCnt=0;
	
	printf("Enter the number of element\n");
	scanf("%d",&iValue);
	
	ptr=(int*)malloc(iValue*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to alloctr thr memory \n");
		return -1;
	}
	
	printf("Enter the element of tyhe Array\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	iRet=Diffirance(ptr,iValue);
	printf("The differance of largest and smallest number is:%d\n",iRet);
	
	free(ptr);
	return 0;
} 
/////////////////////////////////////////
// Input:  
//	    N: 6
//Element: 85 66 3 66 93 88
// output: 90 (93 -3)
////////////////////////////////////////

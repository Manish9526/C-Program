#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////
//
// Function Name: ProductOdd
// Discription:   producat of all odd number.
// Input:		  Integer Array,IntegerA
// Output:		  Integer
// Author:		  Manish Ghalme
// Date:		  1/2/2022.
//
/////////////////////////////////////////////////

int ProductOdd(int Arr[],int iLength)
{
	int iCnt=0,iSum=1;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%2)!=0)
		{
			iSum=iSum*Arr[iCnt];
		}
	}
	
	if(iSum==1)
	{
		iSum=0;
	}
	
	return iSum;
}
/////////////////////////////////////////////////////////////////
//Accept N number from uaer and return product of all odd element. 
////////////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iCnt=0;
	int iRet=0;
	
	printf("Enter the number of element\n");
	scanf("%d",&iValue);
	
	ptr=(int *)malloc(iValue*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to allocate to memory\n");
		return -1;
	}
	
	printf("Enter the element of Array\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}

	iRet=ProductOdd(ptr,iValue);
	printf("the product is:%d",iRet);
	
	free(ptr);
	return 0;
}
/////////////////////////////////////////
// Input=>  N  : 6
//		Element: 15 66 3 70 10 88
// output:  45.
////////////////////////////////////////

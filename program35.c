#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////
//
// Function Name:  Display 
// Discription:   perfrom the opration on array
//					number is divisible bye 5 
// Input:		  Integer Array,Integer
// Output:		   --
// Author:		  Manish Ghalme
// Date:		  16/4/2021.
//
/////////////////////////////////////////////////
void Display(int Arr[],int iLength)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%5)==0)
		{
			printf("Element divisible by 5: %d\n",Arr[iCnt]);
		}
	}
	
}
///////////////////////////////////////////////////////
// Accept n number from user and  Display all such  
//   element which are divisible by 5.
//////////////////////////////////////////////////////

int main()
{
	int iSize=0;
	int *iptr=NULL;
	int iCnt=0;
	
	printf("Enter Nnmber of element\n");
	scanf("%d",&iSize);
	
	iptr=(int *)malloc(iSize*sizeof(int));
	
	if(iptr==NULL)
	{
		printf("Unable to allocate to memory\n");
		return -1;
	}
	
	if(iValue<0)
	{
		iValue= -iValue;
	}
	
	printf("Enter the element of array\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the element %d :",iCnt+1);
		scanf("%d",&iptr[iCnt]);
	}
	
	Display(iptr,iSize);
	
	free(iptr);
	return 0;
}
/////////////////////////////////////////
// Input:
//		 N : 6
//  Element: 85 66 3 80 93 88
// output: 85 80
////////////////////////////////////////
#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////
//
// Function Name: Display 
// Discription:   work on array and perfrom the
//				  number is divisible by 3 or 5.	
// Input:		  Integer Array,Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  1/4/2020.
//
/////////////////////////////////////////////////

void Display(int Arr[],int iLength)
{
	
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]%11)==0)
		{
			printf("The number is multipiled by 11: %d\n",Arr[iCnt]);
		}
	}
}
///////////////////////////////////////////////////////
// Accet N number from user Display all the element 
//          which is divisible by 3 and 5
//////////////////////////////////////////////////////

int main()
{
	int iSize=0,iCnt=0;
	int *iptr=NULL;
	
	printf("Enter the number\n");
	scanf("%d",&iSize);
	
	iptr=(int*)malloc(iSize*sizeof(int));
	if(iptr==NULL)
	{
		printf("Unbale to allocated the memory\n");
		return -1;
	}
	
	if(iValue<0)
	{
		iValue= -iValue;
	}
	
	printf("Enter the elemnet of Array\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the element %d",iCnt);
		scanf("%d",&iptr[iCnt]);
	
	}
	
	Display(iptr,iSize);
	free(iptr);
	
	return 0;
}
/////////////////////////////////////////
// Input:
//		  N: 6
//	Element: 85 66 3 15 93 88
// output:   15.
////////////////////////////////////////
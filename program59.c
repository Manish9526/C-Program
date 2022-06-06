#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////
//
// Function Name: DisplaySummation
// Discription:   Perform Sumation of Digit
// Input:		  Integer Array,Integer
// Output:		  ---
// Author:		  Manish Ghalme
// Date:		  20/2/2022.
//
/////////////////////////////////////////////////

void DisplaySummation(int Arr[],int iLength)
{
	int iCnt=0,iDigSum=0,iNo=0,iDigit=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iDigSum=0;
		iNo=Arr[iCnt];
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iDigSum=iDigSum+iDigit;
			iNo=iNo/10;
		}
		printf(" %d   Summation All is: %d\n",Arr[iCnt],iDigSum);
	}
}
/////////////////////////////////////////////////////////////////////////////
//Accept n number from user and display Summation of digit of each number. 
/////////////////////////////////////////////////////////////////////////////
int main()
{
	int iValue=0;
	int *ptr=NULL;
	int iCnt=0;
	
	printf("Enter the number of element\n");
	scanf("%d",&iValue);
	
	ptr=(int*)malloc(iValue*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	printf("Enter the lemenet of Array\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	DisplaySummation(ptr,iValue);
	
	free(ptr);
	return 0;
}
/////////////////////////////////////////
// Input:  N: 6
//	 Element: 8225 665 3 76 953 858
// output:    17 17 3 13 17 21
////////////////////////////////////////

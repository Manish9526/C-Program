#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////
//
// Function Name: DisplayDigit
// Discription:   Find the three number and display.
// Input:		  Integer Array,Integer
// Output:		  ---
// Author:		  Manish Ghalme
// Date:		  22/2/2022.
//
/////////////////////////////////////////////////

void DisplayDigit(int Arr[],int iLength)
{
	int iCnt=0,iDigCnt=0,iDigit=0,iNo=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		iDigCnt=0;
		iNo=Arr[iCnt];
		while(iNo!=0)
		{
			iDigit=iNo%10;
			iDigCnt++;
			iNo=iNo/10;
		}
		
		if(iDigCnt==3)
		{
			printf("The three digit number\n");
			printf("%d\n",Arr[iCnt]);
		}
	}
}
///////////////////////////////////////////////////////////////////////////////////
//accept N number from user And display all such number which contain 3 digit in it.
/////////////////////////////////////////////////////////////////////////////////////


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
		printf("Unable to allocate to memory\n");
		return -1;
	}
	
	printf("Entre the element of Array\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	DisplayDigit(ptr,iValue);
	
	free(ptr);
	
	return 0;
}
/////////////////////////////////////////
// Input:  
//	    N: 6
//Element: 8225 665 3 76 953 858
// output: 665 953 858.
////////////////////////////////////////

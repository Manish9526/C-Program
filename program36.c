#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Work on array to perfrom thr number 
//					are even or divisible by 5.
// Input:		  Integer Array, INteger
// Output:		  ---
// Author:		  Manish Ghalme
// Date:		  16/4/2021.
//
/////////////////////////////////////////////////
void Display(int Arr[],int iLength)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((((Arr[iCnt]%2)==0)&&(Arr[iCnt]%5)==0))
		{
			printf("The number is Even and divisible by 5: %d ",Arr[iCnt]);
		}
	}
	
}
///////////////////////////////////////////////////////
// Accept n number from user and  Display all such  
//   element which even and divisible by 5.        
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
		printf("Unable to allocated to memory\n");
		return -1;
	}
		
	
	if(iValue<0)
	{
		iValue= -iValue;
	}
	
	printf("Enter the element of Array\n");
	for(iCnt=0;iCnt<iSize;iCnt++)
	{
		printf("Enter the elemnet %d:",iCnt+1);
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
// output:   80
////////////////////////////////////////
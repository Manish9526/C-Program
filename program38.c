#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////
//
// Function Name:  Display
// Discription:   Work in Array and number is multilpied by 11
// Input:		  Integer Array ,Integer
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
		if((Arr[iCnt]%11==0))
		{
			printf("The number Multiplied by 11:%d",Arr[iCnt]);
		}
	}
}
///////////////////////////////////////////////////////
// Accept n number from user and  Display all such  
//   element which are multiplied by 11.                  
//////////////////////////////////////////////////////

int main()
{
	int iValue=0,iCnt=0;
	int *ptr=NULL;
	
	printf("Enter the number of element\n");
	scanf("%d",&iValue);
	
	ptr=(int*)malloc(iValue*sizeof(int));
	
	if(ptr==NULL)
	{
		printf("Unable to allocate the memory\n");
		return -1;
	}
	
	if(iValue<0)
	{
		iValue= -iValue;
	}
	
	printf("Enter the element in array\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	Display(ptr,iValue);
	
	free(ptr);
	return 0;	
}
/////////////////////////////////////////
// Input:
//		 N : 6
//  Element: 85 66 3 55 93 88
// output: 66 55 88
////////////////////////////////////////
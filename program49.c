#include<stdio.h>
#include<stdlib.h>
////////////////////////////////////////////////
// Function Name: Maximun
// Discription:   Find Largest number and retrun. 
// Input:		  Integer Array,Integer
// Output:		  Integer
// Author:		  Manish Ghalme
// Date:		  21/2/2022.
/////////////////////////////////////////////////
int Maximun(int Arr[],int iLength)
{
	int iCnt=0,iMax=0;
	iMax=Arr[0];
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if(Arr[iCnt]>iMax)
		{
			iMax=Arr[iCnt];
		}
	}
	return iMax;
}
///////////////////////////////////////////////////////
//Accept N number from user and return largest number.
//////////////////////////////////////////////////////
int main()
{
	int iValue=0;
	int iCnt=0;
	int *ptr=NULL;
	int iRet=0;
	
	printf("Enter the number of Element\n");
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
	
	iRet=Maximun(ptr,iValue);
	printf("The largest number in array is:%d",iRet);
	
	free(ptr);
	return 0;
}
/////////////////////////////////////////
// Input:  
//	    N: 6
//Element: 85 66 3 66 93 88
// output: 93
////////////////////////////////////////


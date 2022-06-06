#include<stdio.h>
#include<stdlib.h>
/////////////////////////////////////////////////
//
// Function Name: Reng
// Discription:   Find the number give rang and display.
// Input:		  Integer Array,Integer,Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  1/2/2022.
//
/////////////////////////////////////////////////

void Reng(int Arr[],int iLength,int iStart,int iEnd)
{
	int iCnt=0;
	
	for(iCnt=0;iCnt<iLength;iCnt++)
	{
		if((Arr[iCnt]>=iStart)&&(Arr[iCnt]<=iEnd))
		{
			printf("%d\t",Arr[iCnt]);
		}
	}
}
///////////////////////////////////////////////////////
//Accept n number from user and accepet range ,Display all       element from that range
//////////////////////////////////////////////////////

int main()
{
	int iValue=0,iCnt=0,iFReg=0,iEReg=0;
	int *ptr=NULL;
	
	printf("Enter the number of element\n");
	scanf("%d",&iValue);
	
	ptr=(int*)malloc(iValue*sizeof(int));
	if(ptr==NULL)
	{
		printf("Unable to allocate the meomory \n");
		return -1;
	}
	
	printf("Enter the element of Array\n");
	for(iCnt=0;iCnt<iValue;iCnt++)
	{
		scanf("%d",&ptr[iCnt]);
	}
	
	printf("Enter Start reng\n");
	scanf("%d",&iFReg);
	
	printf("Enter End reng\n");
	scanf("%d",&iEReg);
	
	Reng(ptr,iValue,iFReg,iEReg);
	
	free(ptr);
	return 0;
}
/////////////////////////////////////////
// Input
//		N: 6
//	First: 60
//	  End: 90
//Element: 85 66 3 76 93 88
// output: 66 76 88
////////////////////////////////////////
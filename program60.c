#include<stdio.h>
/////////////////////////////////////////////////
//
// Function Name: Display
// Discription:   Display pattern  
// Input:		  Integer
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  5/2/2022.
//
/////////////////////////////////////////////////

void Display(int iNo)
{
	int iCnt=0;
	char ch='\0';
	
	for(iCnt=1,ch='A';iCnt<=iNo;iCnt++,ch++)
	{
		printf("%c\t",ch);
	}
	
}
///////////////////////////////////////////////////////
//Accept number from use and display pattern
//////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	Display(iValue);
	
	return 0;
}
///////////////////////////////////
//input: 5
//output: A B C D E 
////////////////////////////////////

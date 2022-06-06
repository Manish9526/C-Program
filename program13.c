#include<stdio.h>

/////////////////////////////////////////////////
//
// Function Name:  EvenFactor
// Discription:   Display the even factor.
// Input:		  intger
// Output:		  --
// Author:		  Manish Ghalme
// Date:		 4/2/2022
//
/////////////////////////////////////////////////
void EvenFactor(int iNo)
{
	int iCnt=0;
	
	for(iCnt=1;iCnt<=(iNo/2);iCnt++)
	{
		if(((iNo % iCnt)==0)&&((iCnt %2)==0))
		{
			printf(" %d",iCnt);
		}
	}
	
} 
/////////////////////////////////////////////////////////
// Accept number from user and display even factor.
////////////////////////////////////////////////////////

int main()
{
	int iValue=0;
	
	printf("Enter the number \n");
	scanf("%d",&iValue);
	
	EvenFactor(iValue);
	
	return 0;
}
////////////////////////////////////////////////////////////
// Input:  36
// output: 2 4 12 18
////////////////////////////////////////////////////////////

#include<stdio.h>

/////////////////////////////////////////////////
//
// Function Name: DisplayConvert
// Discription:   convert case.
// Input:		  character
// Output:		  --
// Author:		  Manish Ghalme
// Date:		  4/2/2022
//
/////////////////////////////////////////////////
void DisplayConvert( char cValue)
{
	if(cValue>='a'&&cValue<='z')
	{
		cValue=cValue-32;
		printf("%c",cValue);
	}
	else if(cValue>='A'&&cValue<='Z')
	{
		cValue=cValue+32;
		printf("% c",cValue);
	}
}
///////////////////////////////////////////////////////////////
//Accept one character from user convert case of that character.
///////////////////////////////////////////////////////////////

int main()
{
	char cValue='\0';
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	DisplayConvert(cValue);
	return 0;
}
////////////////////////////////////////////////////////////
// Input:  a.
// output: A
////////////////////////////////////////////////////////////





#include<stdio.h>
typedef int BOOL;
#define TRUE 1
#define FALSE 0

/////////////////////////////////////////////////
//
// Function Name: CheVowel
// Discription:   Check given chracter is vowel or not
// Input:		  character
// Output:		  --
// Author:		  Manish Ghalme
// Date:		 4/2/2022
//
/////////////////////////////////////////////////

BOOL CheVowel(char ch)
{
	if ((ch=='a'||ch=='A')||
		(ch=='e'||ch=='E')||
		(ch=='i'||ch=='I')||
		(ch=='o'||ch=='O')||
		(ch=='u'||ch=='U'))
	{
		return TRUE; 
	}
	else
	{
		return FALSE;
	}
}
//////////////////////////////////////////////////////////////////////////////
// Accept character from user and check wather that character is vowel or note
//////////////////////////////////////////////////////////////////////////////////

int main()
{ 
	char cValue='\0';
	BOOL bRet=FALSE;
	
	printf("Enter the character\n");
	scanf("%c",&cValue);
	
	bRet=CheVowel(cValue);
	
	if(bRet==TRUE)
	{
		printf("It is vowel\n");
	}
	else
	{
		printf("It is not vowel\n");
	}
	
	return 0;
}
////////////////////////////////////////////////////////////
// Input:  e
// output: True
////////////////////////////////////////////////////////////

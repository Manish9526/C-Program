#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node* Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/////////////////////////////////////////////////////////////
///////////////////////////////////
// 
// Function Discription: Insert the node in linkedlist. 
// Input:                One pointer,one integer.
// Output:               --
//
//////////////////////////////////
///////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=iNo;
	newn->Next=NULL;
	
	if(*Head!=NULL)
	{
		newn->Next=*Head;
	}
	*Head=newn;
}
////////////////////////////////////////////////////////////
///////////////////////////////////
// Function name: Display.   
// Discription:   Display the node. 
// Input:         one pointer.
// Output:        Nothing.
//
//////////////////////////////////
///////////////////////////////////////////////////////////////

void Display (PNODE Head)
{
	while(Head!=NULL)
	{
		printf("|%d|->",Head->Data);
		Head=Head->Next;
	}
	printf("NULL\n");
}
///////////////////////////////////////////////////////////////
//////////////////////////////////////
//
// Inpute:    one pointer,one integer.
// Output:    integer
// Founction: Search the smallest elemenet .
//
/////////////////////////////////////////
///////////////////////////////////////////////////////////////

int Minimum(PNODE Head)
{
	int iMin=0;
	iMin=Head->Data;
	
	while(Head!=NULL)
	{
		if(Head->Data<iMin)
		{
			iMin=Head->Data;
		}
		Head=Head->Next;
	}
	return iMin;
}
/////////////////////////////////////////////////////////////
//////////////////////////////////
// Function name: Main Function
// Discription:   write the program which return smallest
//                elemenet from singly linner linkedlist. 
// Author name:  Manish Ghalme.
// Date:         19/5/2022.
//////////////////////////////////
///////////////////////////////////////////////////////////////

int main()
{
	PNODE First=NULL;
	int iRet=0;
	
	InsertFirst(&First,640);
	InsertFirst(&First,240);
	InsertFirst(&First,20);
	InsertFirst(&First,230);
	InsertFirst(&First,110);
	
	Display(First);
	iRet=Minimum(First);
	printf("The Samllest element in the nide is:%d",iRet);
	return 0;
}
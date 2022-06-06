#include<Stdio.h>
#include<stdlib.h>
struct node
{
	int Data;
	struct node* Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

/////////////////////////////////////////////////////////////
///////////////////////////////////
// 
// Function Discription: Insert the node in linkedlist. 
// Input:                One pointer,one integer.
// Output:               Nothing.
//
//////////////////////////////////
///////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn=NULL;
	newn=(PNODE)malloc (sizeof(NODE));
	newn->Data=iNo;
	newn->Next=NULL;
	
	if(Head!=NULL)
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

void Display(PNODE Head)
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
// Inpute:    One pointer.
// Output:    Integer
// Founction: Search the  largest element.
//
/////////////////////////////////////////
///////////////////////////////////////////////////////////////

int Maximum(PNODE Head)
{
	int iMax=0;
	iMax=Head->Data;
	while(Head!=NULL)
	{
		if(Head->Data >iMax)
		{
			iMax=Head->Data;
		}
		Head=Head->Next;
	}
	return iMax;
}
/////////////////////////////////////////////////////////////
//////////////////////////////////
// Function name: Main Function
// Discription:   write the program which return largest 
//                elemenet from singly linner linkedlist. 
// Author name:  Manish Ghalme.
// Date:         19/5/2022.
//////////////////////////////////
///////////////////////////////////////////////////////////////

int main()
{
	PNODE First=NULL;
	int iRet=0;
	
	InsertFirst(&First,240);
	InsertFirst(&First,320);
	InsertFirst(&First,230);
	InsertFirst(&First,110);
	
	Display(First);
	iRet=Maximum(First);
	printf("The maximum number in the node is: %d",iRet);
	
	return 0;
}
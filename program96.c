#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node*Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node ** PPNODE;

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
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=iNo;
	newn->Next=NULL;
	
	if(Head==NULL)
	{
		*Head=newn;
	}
	else
	{
		newn->Next=*Head;
		*Head=newn;
	}
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

void Display(PNODE Head )
{
	while (Head!=NULL)
	{
		printf("|%d|->",Head->Data);
		Head=Head->Next;
	}
	printf("NULL\n");
}
/////////////////////////////////////////////////////////////
///////////////////////////////////
// 
// Function Discription: Count the number of node. 
// Input:                one pointer.
// Output:               integer.
//
//////////////////////////////////
///////////////////////////////////////////////////////////////

int Count(PNODE Head)
{
	int iCnt=0;
	while(Head!=NULL)
	{
		iCnt++;
		Head=Head->Next;
	}
	return iCnt;
}
///////////////////////////////////////////////////////////////
//////////////////////////////////////
//
// Inpute:    one pointer,one integer.
// Output:    integer
// Founction: search the last Occurance.
//
/////////////////////////////////////////
///////////////////////////////////////////////////////////////

int SearchLastOcc(PNODE Head,int iNo)
{
	int iSize=0,iCnt=0;
	iSize=Count(Head);
	printf("%d\n",iSize);
	for(iCnt=iSize;iCnt>=1;iCnt--)
	{
		if((Head->Data)==iNo)
		{
			return iCnt;
		}
		Head=Head->Next;
		iCnt++;
	}
}
/////////////////////////////////////////////////////////////
//////////////////////////////////
// Function name: Main Function
// Discription:   write the program which search  last occurance  
//               of perticular elemenet from singly linner linkedlist. 
// Author name:  Manish Ghalme.
// Date:         19/5/2022.
//////////////////////////////////
///////////////////////////////////////////////////////////////

int main()
{
	int iRet=0;
	PNODE First=NULL;

	InsertFirst(&First,70);
	InsertFirst(&First,30);
	InsertFirst(&First,50);
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	InsertFirst(&First,20);
	InsertFirst(&First,30);
	
	Display(First);
	iRet=SearchLastOcc(First,30);
	printf("the last occurances is: %d",iRet);
	return 0;
}
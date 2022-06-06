#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

/////////////////////////////////////////////////////////////
// Function :   InsertFirst
// Discription: Insert the node in linkedlist. 
// Input:       Integer,Integer.
// Output:      Nothing.
///////////////////////////////////////////////////////////////

void InsertFirst(PPNODE Head,int iNo)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->Data=iNo;
	newn->Next=NULL;
	
	if(Head!=NULL)
	{
		newn->Next=*Head;
	}
	*Head=newn;
}
////////////////////////////////////////////////////////////
// Function name: Display.   
// Discription:   Display the node. 
// Input:         Integer
// Output:        Nothing.
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
/////////////////////////////////////////////////////////////
// Function name: SecMaximum 
// Discription:   Find Second maximum number. 
// Input:         Integer.
// Output:        Integer.
///////////////////////////////////////////////////////////////

int SecMaximum(PNODE Head)
{
	int iCnt=0;
	int iMax=Head->Data;
	int iSecMax=Head->Data;

	while(Head!=NULL)
	{
		if(iMax<Head->Data)
		{
			iSecMax=iMax;
			iMax=Head->Data;
		}
		else if(iSecMax<Head->Data)
		{
			iSecMax=Head->Data;
		}
		Head=Head->Next;
	}
	return iSecMax;
}
/////////////////////////////////////////////////////////////
// Function name: Main Function
// Discription:   write the program which return second largest 
//                number from singly linner linkedlist
// Author name:  Manish Ghalme.
// Date:         19/3/2022.
///////////////////////////////////////////////////////////////

int main()
{
	PNODE First =NULL;
	int iRet=0;
	
	InsertFirst(&First,240);
	InsertFirst(&First,320);
	InsertFirst(&First,230);
	InsertFirst(&First,1110);
	InsertFirst(&First,555);
	InsertFirst(&First,101);
	InsertFirst(&First,11);
	
	Display(First);
	iRet=SecMaximum(First);
	printf("The second maximun element is:%d\n",iRet);
	return 0;
}

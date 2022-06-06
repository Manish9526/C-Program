#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node *Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
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

void Display(PNODE Head )
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
// Founction: Addition of all element.
//
/////////////////////////////////////////
///////////////////////////////////////////////////////////////

int Addition(PNODE Head)
{
	int iSum=0;
	while(Head!=NULL)
	{
		iSum=iSum+(Head->Data);
		Head=Head->Next;
	}
	return iSum;
}
/////////////////////////////////////////////////////////////
//////////////////////////////////
// Function name: Main Function
// Discription:   write the program which return Addition of     
//               all the elemenet from singly linner linkedlist. 
// Author name:  Manish Ghalme.
// Date:         19/5/2022.
//////////////////////////////////
///////////////////////////////////////////////////////////////

 int main() 
 {
	int iRet=0;
	PNODE First= NULL;
	
	InsertFirst(&First,40);
	InsertFirst(&First,30);
	InsertFirst(&First,20);
	InsertFirst(&First,10);
	
	Display(First);
	iRet=Addition(First);
	printf("Addition of all node is:%d",iRet);
	return 0;
 }
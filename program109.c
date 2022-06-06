#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;
/////////////////////////////////////////////////////////////
// 
// Function :   InsertFirst
// Discription: Insert the node in linkedlist. 
// Input:       Integer,Integer.
// Output:      Nothing.
//
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
/////////////////////////////////////////////////////////////
//
// Function name: Display.   
// Discription:   Display the node. 
// Input:         Integer
// Output:        Nothing.
//
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
// Function name: DisplayDigit
// Discription:   Display the digit largest digit in singly linner liked list. 
// Input:         Integer.
// Output:        Integer.
///////////////////////////////////////////////////////////////

void DisplayDigit(PNODE Head)
{
	int iDigit=0,iCnt=0,iMax=0;
	while(Head!=NULL)
	{
		iCnt=0;
		while(Head->Data!=0)
		{
			iDigit=Head->Data%10;
			iCnt++;
			if(iCnt==1)
			{
				iMax=iDigit;
			}
			else if(iMax < iDigit)
			{
				iMax=iDigit;
			}
			Head->Data=Head->Data/10;
			
		}
		printf("%d\n",iMax);
		Head=Head->Next;
	}
}
//////////////////////////////////////////////////////////////////////////////////////////
//write the program displaY largest digits of all element from singly linner linked list;
////////////////////////////////////////////////////////////////////////////////////////////
int main()
{
	PNODE First=NULL;
	int Choice=1,iNo=0;
	while(Choice!=0)
	{
		printf("1.Insert First Node\n");
		printf("2.Display Number Node\n");
		printf("3.Display  largest digit of  Node\n");
		printf("4.Terminet the program\n");
		scanf("%d",&Choice);
		switch(Choice)
		{
			case 1:
				printf("Enter the number \n");
				scanf("%d",&iNo);
				InsertFirst(&First,iNo);
				break;
			case 2:
				Display(First);
				break;
			case 3:
				DisplayDigit(First);
				break;
			case 4:
				Choice=0;
				break;
		}
	}
	
	return 0;
}
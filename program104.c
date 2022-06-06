#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node* Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
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
/////////////////////////////////////////////////////////////
// Function name: Display
// Discription:   Display the number of node. 
// Input:         Integer.
// Output:        ---
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
// Function name: Count 
// Discription:   Count the number of node. 
// Input:         Integer.
// Output:        Integer.
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
/////////////////////////////////////////////////////////////
// Function name: DisplayAddDig
// Discription:   Addtion of digit. 
// Input:         Integer.
// Output:        ---
///////////////////////////////////////////////////////////////

void DisplayAddDig(PNODE Head)
{
	int iDigit=0,iNo=0,iCnt=0,iSum=1,iSize=0;
	iSize=Count(Head);
	
	for(iCnt=1;iCnt<=iSize;iCnt++)
	{
		iSum=0;
		while(Head->Data!=0)
		{
			iDigit=Head->Data%10;
			iSum=iSum+iDigit;
			Head->Data=Head->Data/10;
		}
		printf("%d\n",iSum);
		Head=Head->Next;
	}
	
}
/////////////////////////////////////////////////////////////
// Function name: Main Function
// Discription:   write the program which display addition 
//                of digit of element of singly linner linked list.
// Author name:  Manish Ghalme.
// Date:         19/3/2022.
///////////////////////////////////////////////////////////////

int main()
{
	PNODE First=NULL;
	
	InsertFirst(&First,640);
	InsertFirst(&First,240);
	InsertFirst(&First,20);
	InsertFirst(&First,230);
	InsertFirst(&First,110);
	
	Display(First);
	DisplayAddDig(First);
	return 0;
}
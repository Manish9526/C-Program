#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct  node* Next;
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

/////////////////////////////////////////////////////////////
// Function name: Display 
// Discription:   Display the number of node. 
// Input:         Integer.
// Output:        --
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
// Function name: AdditionEvn 
// Discription:   Addition of all even node. 
// Input:         Integer.
// Output:        Integer.
///////////////////////////////////////////////////////////////

int AdditionEvn(PNODE Head)
{
	int iSum=0;
	while(Head!=NULL)
	{
		if((Head->Data%2)==0)
		{
			iSum=iSum+(Head->Data);
		}
		Head=Head->Next;
	}
	return iSum;
}

/////////////////////////////////////////////////////////////
// Function name: Main Function
// Discription:   write the program addition of all even number  
//                 in singly linked list.
// Author name:  Manish Ghalme.
// Date:         19/4/2022.
///////////////////////////////////////////////////////////////

int main()
{
	int iRet=0;
	PNODE First=NULL;
	
	InsertFirst(&First,41);
	InsertFirst(&First,32);
	InsertFirst(&First,20);
	InsertFirst(&First,11);
	
	Display(First);
	iRet=AdditionEvn(First);
	printf("Addition is:%d\n",iRet);
	return 0;
}
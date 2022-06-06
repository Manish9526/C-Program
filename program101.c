#include<stdio.h>
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
// Function :   InsertFirst
// Discription: Insert the node in linkedlist. 
// Input:       Integer,Integer.
// Output:      Nothing.
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

/////////////////////////////////////////////////////////////
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
// Function name: Count 
// Discription:   Count the number of node. 
// Input:         Integer.
// Output:        Integer.
///////////////////////////////////////////////////////////////

int Count(PNODE Head)
{
	int iCnt=0;
	while(Head!=0)
	{
		iCnt++;
		Head=Head->Next;
	}
	return iCnt;
}

/////////////////////////////////////////////////////////////
// Function name: DisplayPrime
// Discription:   Prime number display . 
// Input:         Integer.
// Output:        --
///////////////////////////////////////////////////////////////

void DisplayPrime(PNODE Head)
{
	int iCnt=0;
		for(iCnt=2;iCnt<=Head->Data/2;iCnt++)
		{
			if((Head->Data%iCnt)!=0)
			{
				printf("%d\n",Head->Data);
			}
			Head=Head->Next;
		}
}
/////////////////////////////////////////////////////////////
// Function name: Main Function
// Discription:  write the program which display all element   
//				which is prime from the singly linner likend list.                
// Author name:  Manish Ghalme.
// Date:         19/4/2022.
///////////////////////////////////////////////////////////////

int main()
{
	PNODE First=NULL;
	
	InsertFirst(&First,3);
	InsertFirst(&First,9);
	InsertFirst(&First,8);
	InsertFirst(&First,15);
	InsertFirst(&First,25);
	InsertFirst(&First,29);
	InsertFirst(&First,11);
	InsertFirst(&First,17);
	
	Display(First);
	DisplayPrime(First);
	return 0;
}
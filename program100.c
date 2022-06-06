#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node * Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node ** PPNODE;
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
	
	if(Head!=NULL)
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
	while (Head!=NULL)
	{
		printf("|%d|->",Head->Data);
		Head=Head->Next;
	}
	printf("NULL\n");
}
///////////////////////////////////////////////////////////// 
// Function name: Perfect
// Discription:   find the perfect number. 
// Input:         Integer.
// Output:        Integer.
///////////////////////////////////////////////////////////////

int Perfect(PNODE Head)
{
	int iCnt=0,iSum=0,temp=0;
	while(Head!=NULL)
	{
		iSum=0;
		for(iCnt=1;iCnt<Head->Data;iCnt++)
		{
			if((Head->Data%iCnt)==0)
			{
				iSum=iSum+iCnt;
			}	
		}	
		if(iSum==Head->Data)
		{
			printf("%d\n",iSum);
		}
		Head=Head->Next;
	}
}
/////////////////////////////////////////////////////////////
// Function name: Main Function
// Discription:   write the program which search perfect number  
//                from singly linner linkedlist. 
// Author name:   Manish Ghalme.
// Date:          19/4/2022.
///////////////////////////////////////////////////////////////
int main()
{
	PNODE First=NULL;
	int iRet=0;
	
	InsertFirst(&First,89);
	InsertFirst(&First,6);
	InsertFirst(&First,12);
	InsertFirst(&First,24);
	InsertFirst(&First,28);
	InsertFirst(&First,11);
	
	Display(First);
	Perfect(First);
	//printf("%d",iRet);
	return 0;
}
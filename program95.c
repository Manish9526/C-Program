
#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node *Next;
};

typedef struct node NODE;
typedef struct node* PNODE;
typedef struct node** PPNODE;

/////////////////////////////////////////////////////////////
///////////////////////////////////
// Function	:   InsertFirst
// Discription: Insert the node in linkedlist. 
// Input:       One pointer,one integer.
// Output:      Nothing.
//////////////////////////////////
///////////////////////////////////////////////////////////////

void insertFirst(PPNODE Head,int iNo)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc (sizeof(NODE));
	newn->Data=iNo;
	newn->Next=NULL;
	
	if(*Head ==NULL)
	{
		*Head=newn;
	}
	else 
	{
		newn->Next=*Head;
		*Head=newn;
	}
}
/////////////////////////////////////////////////////////////
///////////////////////////////////
// Function name: Display.   
// Discription:   Display the node. 
// Input:         one pointer.
// Output:        Nothing.
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

/////////////////////////////////////////////////////////////
///////////////////////////////////
// Function name: Count
// Discription:   Count the number of node. 
// Input:         Integer
// Output:        Integer.
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
// Founction: search the first Occurance.
// Inpute:    one pointer,one integer.
// Output:    integer
/////////////////////////////////////////
///////////////////////////////////////////////////////////////

int SearchFirstOcc(PNODE Head,int iNo)
{
	int iCnt=0,iSize=0;

	iSize=Count(Head);
	for(iCnt=1;iCnt<=iSize;iCnt++)
	{
		
		if(Head->Data==iNo)
		{
			return iCnt;
		}
		Head=Head->Next;
	}
}
/////////////////////////////////////////////////////////////
//////////////////////////////////
// Function name: Main Function
// Discription:   write the program which search  first occurance  
//               of paerticular elemenet from singly linner linkedlist. 
// Author name:  Manish Ghalme.
// Date:         19/5/2022.
//////////////////////////////////
///////////////////////////////////////////////////////////////

int main()
{
	int iRet=0;
	PNODE First=NULL;
	
	insertFirst(&First,70);
	insertFirst(&First,30);
	insertFirst(&First,50);
	insertFirst(&First,40);
	insertFirst(&First,30);
	insertFirst(&First,20);
	insertFirst(&First,10);
	
	Display(First);
	iRet=SearchFirstOcc(First,30);
	
	printf("the  first occurances is : %d",iRet);
	return 0;
}
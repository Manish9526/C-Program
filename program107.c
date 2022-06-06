#include<stdio.h>
#include<stdlib.h>

struct node
{
	int Data;
	struct node* Next;
};

typedef struct node NODE;
typedef struct node * PNODE;
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
// Function name: DisplayProduct
// Discription:   Use to perfrom the product of number. 
// Input:         Integer.
// Output:        Integer.
///////////////////////////////////////////////////////////////

 void DisplayProduct(PNODE Head)
 {
	int iSize=0,iCnt=0,iMult=0,iDigit=0;
	iSize=Count(Head);
	
	for(iCnt=1;iCnt<=iSize;iCnt++)
	{
		iMult=1;
		while(Head->Data!=0)
		{
			iDigit=Head->Data%10;
			if(iDigit!=0)
			{	
				iMult=iMult*iDigit;
			}
			Head->Data=Head->Data/10;
		}
		printf("|%d|->",iMult);
		Head=Head->Next;
	}
	printf("NULL\n");
	
 }
 ///////////////////////////////////////////////////////////////////////////////////////////////////
//write the program  which display all product of all digit of all element from linner linked list.
////////////////////////////////////////////////////////////////////////////////////////////////////

int main()
{
	PNODE First=NULL;
	int Choice=1,iRet=0,iNo=0;
	while(Choice!=0)
	{
		printf("1.Insert First Node\n");
		printf("2.Display Number Node\n");
		printf("3.display  product of all digit of all element\n");
		printf("4.Display the Count of node\n");
		printf("5.Terminet the program\n");
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
				 DisplayProduct(First);
				break;
			case 4:
				iRet=Count(First);
				printf("d",iRet);
			case 5:
				Choice=0;
				break;
		}
	}
	
	return 0;
}
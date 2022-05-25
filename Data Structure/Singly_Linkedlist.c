#include<stdio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef  struct node ** PPNODE;

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Display
//  Description :   Display the node.
//  Input :         pointer 
//  Output :        Noting
//  Date :          20/05/2022
//  Author :        Manish Sahadev Ghalme
//
/////////////////////////////////////////////////////////////////////

void Display(PNODE head)
{
	while(head!=NULL)
	{
		printf("|%d|->",head->data);
		head=head->next;
	}
	printf("NULL\n");
}	

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  Count
//  Description :   Count the all node present in Linkedlist.
//  Input :         pointer
//  Output :       integer
//
/////////////////////////////////////////////////////////////////////

int Count (PNODE head)
{
	int iCnt=0;
	
	while (head!=NULL)
	{
		iCnt++;
		head=head->next;
	}
	
	return iCnt;
}
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertFirst
//  Description :   Insert the node at first.
//  Input :         pointer of pointer, Integer
//  Output :       Noting
//
/////////////////////////////////////////////////////////////////////

void InsertFirst(PPNODE head, int no)
{
	PNODE newn=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	
	if(*head == NULL)
	{
		*head=newn;
	}
	else
	{
		newn->next=*head;
		*head=newn;
	
	}
}
/////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertLast
//  Description :   Insert the Last node .
//  Input :         pointer of pointer, Integer
//  Output :        Noting
//
/////////////////////////////////////////////////////////////////////

void InsertLast(PPNODE head,int no)
{
	
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	newn=(PNODE)malloc(sizeof(NODE));
	newn->data=no;
	newn->next=NULL;
	
	if(*head == NULL)
	{
		*head=newn;
	}
	else
	{
		temp=*head;
		
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newn;
	}
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteFirst
//  Description :   Delete the First node .
//  Input :         pointer of pointer
//  Output :        Noting
//
/////////////////////////////////////////////////////////////////////

void DeleteFirst(PPNODE head)
{
	PNODE temp=*head;
	
	if(*head==NULL)
	{
		return ;
	}
	
	if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		temp=*head;
		*head=temp->next;
		free(temp);
	}
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteLast
//  Description :   Delete the Last node .
//  Input :         pointer of pointer
//  Output :        Noting
//
/////////////////////////////////////////////////////////////////////

void DeleteLast(PPNODE head)
{
	
	PNODE temp=*head;
	
	if(*head==NULL)
	{
		return ;
	}
	
	if((*head)->next==NULL)
	{
		free(*head);
		*head=NULL;
	}
	else
	{
		temp=*head;
		while(temp->next->next!=NULL)
		{
			temp=temp->next;
		}
		free(temp->next);
		temp->next=NULL;
	}
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  InsertAtPost
//  Description :   Insert node At posion .
//  Input :         pointer of pointer, Integer,Integer
//  Output :        Noting
//
/////////////////////////////////////////////////////////////////////

void InsertAtPost(PPNODE head,int no,int pos)
{
	int iSize=0,iCnt=0;
	PNODE newn=NULL;
	PNODE temp=NULL;
	
	iSize=Count(*head);
	
	if((pos<1) || (pos>iSize+1))
	{
		return;
	}
	
	if(pos==1)
	{
		InsertFirst(head,no);
	}
	else if(pos==iSize+1)
	{
		InsertLast(head,no);
	}
	else
	{
		newn=(PNODE)malloc(sizeof(NODE));
		newn->data=no;
		newn->next=NULL;
		temp=*head;
		
		for(iCnt=1;iCnt< pos-1;iCnt++)
		{
			temp=temp->next;
		}
		newn->next=temp->next->next;
		temp->next=newn;
		
	}
}

/////////////////////////////////////////////////////////////////////
//
//  Function Name:  DeleteAtPost
//  Description :   Delete the node Random postion .
//  Input :         pointer of pointer, Integer
//  Output :        Noting
//
/////////////////////////////////////////////////////////////////////

void DeleteAtPost(PPNODE head,int pos)
{
	
	int iSize=0,iCnt=0;
	PNODE tempdelete=NULL;
	PNODE temp=NULL;
	
	iSize=Count(*head);
	
	if((pos<1) || (pos>iSize))
	{
		return;
	}
	
	if(pos==1)
	{
		DeleteFirst(head);
	}
	else if(pos==iSize)
	{
		DeleteLast(head);
	}
	else
	{
		temp=*head;
		tempdelete=temp;
		
		for(iCnt=1;iCnt< pos-1;iCnt++)
		{
			temp=temp->next;
		}
		tempdelete=temp->next;
		temp->next=temp->next->next;
		free(tempdelete);
	}
}

/////////////////////////////////////////////////////////////////////
// This program perform the Singly Linner Linkedlist.
/////////////////////////////////////////////////////////////////////

int main()
{
	int iRet=0;
	PNODE first=NULL;
	
	InsertFirst(&first,101);
	InsertFirst(&first,51);
	InsertFirst(&first,21);
	InsertFirst(&first,11);
	InsertAtPost(&first, 555,3);
	DeleteAtPost(&first,3);
	
	InsertLast(&first,75);
	Display (first);
	iRet=Count(first);
	printf("the  number of node is:%d\n ",iRet);
	
	DeleteFirst(&first);
	Display (first);
	iRet=Count(first);
	printf("the  number of node is:%d\n ",iRet);
	
	DeleteLast(&first);
	Display (first);
	iRet=Count(first);
	printf("the  number of node is:%d\n ",iRet);
	
	
	return 0;
}

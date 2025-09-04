#include "apc.h"

int division(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR,Dlist **tailR)
{
	/* Definition goes here */
	int count=0;
	int num=0,y=0;
	Dlist *temp1=*head2;
	while(temp1!=NULL)
	{
		y=y*10+temp1->data;
		temp1=temp1->next;
		
	}

	Dlist *temp=*head1;
    while(temp!=NULL)
	{
		num=num*10+temp->data;	
		temp=temp->next;
		
	}
	
	while(num>=y)
	{
		num=0;
	subtraction(head1,tail1,head2,tail2,headR,tailR);
	delete_list(head1,tail1);
	*head1=*headR;
	*tail1=*tailR;
	temp=*head1;
	*headR=*tailR=NULL;
	while(temp!=NULL)
	{
		num=num*10+temp->data;
		temp=temp->next;
		
	}
	count++;
	}
	printf("After Division :%d\n",count);
	
}

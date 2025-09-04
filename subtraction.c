#include "apc.h"

int subtraction(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR,Dlist **tailR)
{
	/* Definition goes here */
	Dlist *temp1 = *tail1;
    Dlist *temp2 = *tail2;
    int num,borrow = 0;

	while(temp1 != NULL) //|| temp2 != NULL)
	{
		 if(temp1 != NULL && temp2 != NULL) 
		{
			
			int n1=temp1->data;
			//printf("%d\n",n1);
			int n2=temp2->data;
		//	printf("%d\n",n2);
			if(borrow==1)
			n1=n1-1;
			if(n2>n1)
			{
				borrow=1;
				n1=n1+10;
               num=n1-n2;
			  // printf("%d\n",num);
			   insert_at_first(headR,tailR,num);
			}
			else
			{
				borrow=0;
				num=n1-n2;
				insert_at_first(headR,tailR,num);
			}
			temp1=temp1->prev;
        	temp2=temp2->prev;
		}
		else if((temp1 != NULL && temp2 == NULL))
		{
          int n1=temp1->data;
		  if(borrow==1)
			n1=n1-1;

             borrow=0;
			num=n1;
			insert_at_first(headR,tailR,num);
			temp1=temp1->prev;
		}
	}
}

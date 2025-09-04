#include "apc.h"

int addition(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR,Dlist **tailR)
{
	/* Definition goes here */
   /* 	/ * 67 + 12 ( both equal ) * /
	/ * 88 + 12 ( carry ) * /
	/ * 88 + 2 ( 2nd_opernad < 1st_opernad ) * /
	/ * 2 + 88 ( 1st_operand < 2nd_opernad ) * /
	*/
   
   int carry=0,num=0;
 Dlist *temp1=*tail1;
 Dlist *temp2=*tail2;

	while(temp1 != NULL || temp2 != NULL)
	{
	    if(temp1 != NULL && temp2 != NULL) 
		{
			num=temp1->data+temp2->data+carry;
			if(num>9)
			{
				num=num%10;
				carry=1;
				insert_at_first(headR,tailR,num);
			}
			else
			{
			 insert_at_first(headR,tailR,num);
			 carry=0;
			}
            temp1=temp1->prev;
        	temp2=temp2->prev;
		}
	
		if(temp1 != NULL && temp2 == NULL) 
		{
			num=temp1->data+carry;
			if(num>9)
			{
				num=num%10;
				carry=1;
				insert_at_first(headR,tailR,num);
			}
			else
			{
				insert_at_first(headR,tailR,num);
				carry=0;
			}
          temp1=temp1->prev;
		}

		if(temp1 == NULL && temp2 != NULL)
		{
			num=temp2->data+carry;
			if(num>9)
			{
				num=num%10;
				carry=1;
				insert_at_first(headR,tailR,num);
			}
			else
			{
				insert_at_first(headR,tailR,num);
				carry=0;
			}
        	temp2=temp2->prev;
		}
	}

if(carry==1)
{
insert_at_first(headR,tailR,carry);
carry=0;
}

}


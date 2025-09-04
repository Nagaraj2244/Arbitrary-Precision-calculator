#include "apc.h"

int multiplication(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, Dlist **headR,Dlist **tailR)
{
	/* Definition goes here */
	
	     Dlist *headR1=NULL;
		 Dlist *tailR1=NULL;
		 Dlist *headR2=NULL;
		 Dlist *tailR2=NULL;
		 Dlist *backuph=NULL;
        Dlist *backupt=NULL;

		 Dlist *temp2=*tail2;
		 int count=0;
		
		
		 while(temp2!=NULL)
		 {
			// insert_at_first(&headR2,&tailR2,0);
			Dlist *temp1=*tail1;
			int carry=0;
			while(temp1!=NULL)
			{
           int num=(temp1->data*temp2->data)+carry;
		   carry=num/10;
		   num=num%10;
		   if(count==0)
		   {
		  insert_at_first(&headR1,&tailR1,num);
		 // print_list(headR1);
		   }
		  else
		  {
			//print_list(headR2);
		  insert_at_first(&headR2,&tailR2,num);
		  //printf("head2\n");
		  // print_list(headR2);
		  }
		  temp1=temp1->prev;
			}
			if(carry)
			{
				if(count==0)
				{
				insert_at_first(&headR1,&tailR1,carry);
                
				}
				else
				{
                insert_at_first(&headR2,&tailR2,carry);
				
				}
				carry=0;
			}
			temp2=temp2->prev;
			if(count!=0)
			{
			addition(&headR1,&tailR1,&headR2,&tailR2,&backuph,&backupt);
			
			
			
			delete_list(&headR1,&tailR1);
			delete_list(&headR2,&tailR2);
			headR1=backuph;
             tailR1=backupt;
			 // print_list(headR1);
			 backuph=backupt=NULL;
			 if(temp2==NULL)
			{
				*headR=headR1;
				*tailR=tailR1;
				break;
			}
			}
			if(temp2==NULL)
			{
				*headR=headR1;
				*tailR=tailR1;
				break;
			}
			 count++;
			for(int i=0;i<count;i++)
			{
			insert_at_first(&headR2,&tailR2,0);
			}
		 }
		

}

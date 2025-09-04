#include "apc.h"

int main(int argc,char **argv)
{
	/* Declare the pointers */
      
	Dlist *head1=NULL, *tail1=NULL;
        Dlist *head2=NULL, *tail2=NULL; 
        Dlist *headR=NULL,*tailR=NULL;


	char operator=argv[2][0];
if(argc<4)
{
	        printf("Minimum 4 arguments required\n");
        return 0;
}

		switch (operator)
		{
			case '+':
                                digit_to_list(&head1,&tail1,&head2,&tail2,argv);
				/* call the function to perform the addition operation */
                                addition(&head1,&tail1,&head2,&tail2,&headR,&tailR);
							printf("After adding \n");
                         print_list(headR);

				break;
			case '-':	
				/* call the function to perform the subtraction operation */
				if(strcmp(argv[1],argv[3])==0)
				{
					 printf("After subtracting\n");
					printf("0\n");
					return 0;
				}
				 char *t1=argv[1];
				 {
					while(*t1=='0')
					t1++;
				 }
				 argv[1]=t1;
				
                  char *t2=argv[3];
				 {
					while(*t2=='0')
					t2++;
				 }
				  argv[3]=t2;
                     int c1=strlen(t1);
				   int c2=strlen(t2);
				int sign=0;
				if((c2>c1)||((c1==c2)&&strcmp(argv[1],argv[3])<0))
				{
					sign=1;
                  digit_to_list(&head2,&tail2,&head1,&tail1,argv);
				}
				else
				{
                    digit_to_list(&head1,&tail1,&head2,&tail2,argv);
				}
			
				subtraction(&head1,&tail1,&head2,&tail2,&headR,&tailR);
                 printf("After subtracting\n");
                 if(sign)
                 printf("-");
                 if(print_list(headR)==LIST_EMPTY)
                 printf("0\n");
				break;
			case 'x':	
				/* call the function to perform the multiplication operation */
				if((strcmp(argv[1],"0")==0)||(strcmp(argv[3],"0")==0))
				{
				 printf("After Multipication\n");
					printf("0\n");
					return 0;	
				}
				  digit_to_list(&head1,&tail1,&head2,&tail2,argv);
				  multiplication(&head1,&tail1,&head2,&tail2,&headR,&tailR);
				  printf("After Multipication \n");
                        print_list(headR);


				break;
			case '/':	
				/* call the function to perform the division operation */
				 char *t3=argv[1];
				 {
					while(*t3=='0')
					t3++;
				 }
				 argv[1]=t3;
				
                  char *t4=argv[3];
				 {
					while(*t4=='0')
					t4++;
				 }
				  argv[3]=t4;
				int l1=strlen(argv[1]);
				int l2=strlen(argv[3]);
				if((strcmp(argv[1],"0")==0 && strcmp(argv[1],"0")==0)||strcmp(argv[1],"0")==0)
				{
					printf("Can't do division operation\n");
					return 0;
				}
				if(l1<l2) 
				{
					printf("After Division\n");
					printf("0\n");
					return 0;	
				}
				if(strcmp(argv[3],"1")==0)
				{
					printf("After divisin :");
					printf("%s\n",argv[1]);
				}
				else if(l1==l2)
				{
                  int x=strcmp(argv[1],argv[3]);
				  if(x==0)
				  {
					printf("After Division\n");
					printf("1\n");
					return 0;
				  }
				  else if(x<0)
				  {
					printf("After Division\n");
					printf("0\n");
					return 0;
				  }
				  else if(x>0)
				  {
					digit_to_list(&head1,&tail1,&head2,&tail2,argv);
					division(&head1,&tail1,&head2,&tail2,&headR,&tailR);
					// printf("After Division \n");
                     //   print_list(headR);
				  }
				}
				else if(l1>l2)
				{
					digit_to_list(&head1,&tail1,&head2,&tail2,argv);
					division(&head1,&tail1,&head2,&tail2,&headR,&tailR);
					// printf("After Division \n");
                    //    print_list(headR);
				}
				break;
			default:
				printf("Invalid Input:-( Try again...\n");
		}
	return 0;
}


int delete_list(Dlist **head, Dlist **tail)
    {
        if (*head == NULL)
            return FAILURE;
        if (*head == *tail)
        {
            free(*head);
            *head = *tail = NULL;
            return SUCCESS;
        }
        else
        {
            while (*head != NULL)
            {
                Dlist *temp = *head;
                *head = (*head)->next;
                free(temp);
            }
            *tail = NULL;
            return SUCCESS;
        }
    }


int insert_at_first(Dlist **head, Dlist **tail, int data)
    {
        Dlist *new = malloc(sizeof(Dlist));
        if (new == NULL)
            return FAILURE;
        new->data = data;
        new->prev = NULL;
        new->next = NULL;
        if (*head == NULL)
        {
            *head = new;
            *tail = new;
            return SUCCESS;
        }
        new->next = *head;
        (*head)->prev = new;
        *head = new;
        return SUCCESS;
    }


	int print_list(Dlist * head)
    {
        if (head == NULL)
        {
            // printf("The List is Empty\n");
            return LIST_EMPTY;
        }
        // printf("Head->");
        Dlist *temp = head;
        while (temp->data == 0)
        {
            temp = temp->next;
        }
        // skip_zero(head);
        while (temp != NULL)
        {
            printf("%d", temp->data);
            temp = temp->next;
        }
        printf("\n");
        return SUCCESS;
    }

    

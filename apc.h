#ifndef APC_H
#define APC_H
#include<stdio.h>
#include<stdlib.h>
#include<string.h>


#define SUCCESS 1
#define FAILURE 0
#define LIST_EMPTY -1

typedef struct node
{
	struct node *prev;
	int data;
	struct node *next;
}Dlist;


/* Include the prototypes here */

/*store the operands into the list */
void digit_to_list(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,char *argv[]);

/*Addition */
int addition(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **headR,Dlist **tailR);
int insert_at_first(Dlist **, Dlist **, int );
int print_list(Dlist*head);
/*subtraction*/
int subtraction(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **headR,Dlist **tailR);
int delete_list(Dlist**head,Dlist**tail);
/*Multiplication*/
int multiplication(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **headR,Dlist **tailR);


/*Division */
int division(Dlist **head1,Dlist **tail1,Dlist **head2,Dlist **tail2,Dlist **headR,Dlist **tailR);

#endif

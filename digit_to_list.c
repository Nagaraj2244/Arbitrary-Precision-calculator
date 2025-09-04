
#include "apc.h"
void digit_to_list(Dlist **head1, Dlist **tail1, Dlist **head2, Dlist **tail2, char *argv[])
{
    char *str = argv[1];
    int i = 0;
 
    //    while(str[i]=='0'){i++;}
    while (str[i] != '\0')
    {
        int num = str[i] - 48;

        Dlist *new = malloc(sizeof(Dlist));
        if (new == NULL)
            return;
        // return FAILURE;
        new->data = num;
        new->prev = NULL;
        new->next = NULL;
        if (*head1 == NULL)
        {
            *head1 = *tail1 = new;
            // return SUCCESS;
        }
        else
        {
            new->prev = *tail1;
            (*tail1)->next = new;
            *tail1 = new;
        }
        i++;
    }

    char *str1 = argv[3];
    int j = 0;
    
      //   while(str[j]=='0'){j++;}
    while (str1[j] != '\0')
    {
        int num = str1[j] - 48;

        Dlist *new = malloc(sizeof(Dlist));
        if (new == NULL)
            return;

        new->data = num;
        new->prev = NULL;
        new->next = NULL;
        if (*head2 == NULL)
        {
            *head2 = *tail2 = new;
        }
        else
        {
            new->prev = *tail2;
            (*tail2)->next = new;
            *tail2 = new;
        }
        j++;
    }

}
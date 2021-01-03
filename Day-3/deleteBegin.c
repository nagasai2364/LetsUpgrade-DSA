#include <stdio.h>
#include <stdlib.h>

void create();
void display();
void delete_beg();


struct node
{
        int info;
        
        struct node *next;
};
struct node *start=NULL;

int main()     
{
    int choice;
        while(1){
             printf("\n 1.Create     ");
                printf("\n 2.Display    ");
                printf("\n 3.Delete from beginning      ");
               
                printf("\nEnter your choice:\t");
                scanf("%d",&choice);
                switch(choice)
                {
                    case 1:
                        create();
                        break;
                    case 2:
                        display();
                        break;
                    case 3:
                        delete_beg();
                        break;
                   default:
                        printf("wrong entry.");
                }
        }
        return 0;
}

void create()
{
        struct node *temp,*ptr;
        temp=(struct node *)malloc(sizeof(struct node));
        if(temp==NULL)
        {
                printf("\nOut of Memory Space:\n");
                exit(0);
        }
        printf("\nEnter the data value for the node:");
        scanf("%d",&temp->info);
        temp->next=NULL;
        if(start==NULL)
        {
                start=temp;
        }
        else
        {
                ptr=start;
                while(ptr->next!=NULL)
                {
                        ptr=ptr->next;
                }
                ptr->next=temp;
        }
}
void display()
{
        struct node *ptr;
        if(start==NULL)
        {
                printf("\nList is empty:\n");
                return;
        }
        else
        {
                ptr=start;
                printf("\nThe List elements are:\n");
                while(ptr!=NULL)
                {
                        printf("%d\t",ptr->info );
                        ptr=ptr->next ;
                }
        }
}
void delete_beg()
{
        struct node *ptr;
        if(ptr==NULL)
        {
                printf("\nList is Empty:\n");
                return;
        }
        else
        {
                ptr=start;
                start=start->next ;
                printf("\nThe deleted element is :%d\t",ptr->info);
                free(ptr);
        }
}


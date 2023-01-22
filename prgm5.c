#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct Node
{
    int data;
    struct Node *next;
}*head = NULL,*temp,*prev;
int insert(int);
int delete_begin();
void display();
void main()
{
   int choice, value;
   while(1)
   {
      printf("\n ***MENU*** \n");
      printf("1.Insert \n2.Delete\n3.Display\n");
      printf("Enter your choice: ");
      scanf("%d",&choice);
      switch(choice)
        {
         case 1: printf("Enter the value to be insert: ");
      scanf("%d", &value);
      insert(value);
      break;
      case 2:
      delete();
      break;
      case 3:
     display();
      break;
         default: printf("\nWrong selection!!! Please try again!!!\n");
        }
   }
}
void display()
{
    if(head == NULL)
    printf("\nList is Empty!!!\n");
    else
    {
        temp = head;
        while(temp->next != NULL)
        {
         printf("%d--->",temp->data);
         temp = temp -> next;
        }
        printf("%d--->NULL",temp->data);
   }
}

int insert(int value)
{
    struct Node *newnode;
    newnode = (struct Node*)malloc(sizeof(struct Node));
    newnode->data = value;
    newnode->next= NULL;
    if(head == NULL)
    {
        head=newnode;
    }
    else
    {
        temp=head;
      while(temp->next != NULL)
      {
     temp=temp->next;
      }
      temp->next=newnode;
    }
}
int delete()
{
   if(head== NULL)
    {
       printf("list is empty");
    }
    else
    {
        temp=head;
        if(temp->next==NULL)
        {
            head=NULL;
            free(temp);
        }
        if(temp->next==NULL)
        {
            head=NULL;
        }
        if(temp->next!=NULL)
        {
            head=temp->next;
            free(temp);
        }
      }
}

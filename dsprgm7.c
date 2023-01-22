
#include<stdio.h>
#include<stdlib.h>
struct Node
{
int data;
struct Node *next;
struct Node *prev;
}*head = NULL,*temp,*prev;
int insert_begin(int);
int insert_end(int);
int insert_loc(int,int);
int delete_begin();
int delete_end();
int delete_loc(int);
void display();
void main()
{
   int choice, value,key;
   while(choice=1)
   {
      printf("\n MENU \n");
      printf(" 1.insertion at the beginning \n 2.Insertion at end \n 3.Insertion in between \n 4.Deletion at beginning \n 5.Deletion at end \n 6.Deletion in give location \n 7.Display ");
      printf("\nEnter your choice: ");
      scanf("%d",&choice);
      switch(choice)
      {
        case 1: printf("Enter the value to be insert: ");
		    scanf("%d", &value);
	    	insert_begin(value);
	    	break;
	        case 2: printf("Enter the value to be insert: ");
		    scanf("%d", &value);
	    	insert_end(value);
		    break;
		    case 3: printf("Enter the value to be insert: ");
		    scanf("%d", &value);
		    printf("Enter the key: ");
		    scanf("%d", &key);
		    insert_loc(value,key);
		    break;
		    case 4:
	    	delete_begin();
		    break;
		    case 5:
		    delete_end();
		    break;
		    case 6:
            printf("Enter the value to be deleted: ");
		    scanf("%d", &key);
		    delete_loc(key);
		    break;
		    case 7:display();
		    break;
	        default: printf("\nWrong selection!!! Please try again!!!\n");
        }
   }
}
int insert_begin(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    if(head == NULL)
    {
       newNode->next=NULL;
       newNode->prev=NULL;
       head=newNode;
    }
    else
    {
      temp=head;
      temp->prev=newNode;
      newNode->next=head;
      head=newNode;
      newNode->prev=NULL;
      }
    }
void display()
{
    if(head == NULL)
    printf("\nList is Empty!!!\n");
    else
    {
        temp = head;
        printf("NULL<---");
        while(temp->next != NULL)
        {
	        printf("%d<--->",temp->data);
	        temp = temp -> next;
        }
        printf("%d<--->NULL",temp->data);
   }
}
int insert_end(int value)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next= NULL;
    if(head == NULL)
    {
       newNode->next=NULL;
       newNode->prev=NULL;
       head=newNode;
    }
    else
    {
        temp=head;
      while(temp->next != NULL)
      {
    	temp=temp->next;
      }
      temp->next=newNode;
      newNode->prev=temp;
      newNode->next=NULL;
    }
}

int insert_loc(int value,int key)
{
    struct Node *newNode;
    newNode = (struct Node*)malloc(sizeof(struct Node));
    newNode->data = value;
    newNode->next= NULL;
    if(head == NULL)
    {
        printf("List is empty");
    }
    else
    {
      temp=head;
      while(temp->data != key)
      {

            temp=temp->next;
        }
        if(temp->prev==NULL&&temp->next==NULL)
        {

         newNode->prev=temp;
         newNode->next=NULL;
         temp->next=newNode;
    }
    else if(temp->next==NULL)
    {
        temp->next=newNode;
        newNode->prev=temp;
        newNode->next=NULL;
    }
    else
    {
        newNode->next=temp->next;
        newNode->prev=temp;
        temp->next=newNode;

    }
}
}
int delete_begin()
{
   if(head== NULL)
    {
       printf("list is empty");
    }
    else if(head->next==NULL && head->prev==NULL)
    {
        head==NULL;
        printf("Value deleted");
    }
    else
    {
        temp=head;
        head=temp->next;
        temp->next->prev=NULL;
        free(temp);
    }
}
int delete_end()
{
    if(head== NULL)
    {
       printf("list is empty");
    }
    else if(temp->prev==NULL&&temp->next==NULL)
    {
        temp=head;
        head=NULL;
        free(temp);
    }

   else
    {
      temp=head;
      while(temp->next!=NULL)
      {
          temp=temp->next;

      }
      temp->prev->next=NULL;
      free(temp);
   }
}

int delete_loc(int key)
{
   if(head==NULL)
    {
        printf("List is empty");
    }
    else
    {
    temp=head;
    {
        while(temp->data!=key&&temp->next==NULL)
        {
           printf("the element not found");
        }

           {
               temp=temp->next;
           }
            if(temp->next==NULL && temp->prev==NULL)
        {
            head=NULL;
            free(temp);
        }
        else if(temp->prev==NULL&&temp->next!=NULL)
        {
            head=head->next;
            head->prev=NULL;
            free(temp);
        }
        else if(temp->prev!=NULL&&temp->next==NULL)
        {
            prev->next=NULL;
            free(temp);
        }
        else
        {
           temp->prev->next=temp->next;
           temp->next->prev=temp->prev;
            free(temp);
        }
    }
    }
}

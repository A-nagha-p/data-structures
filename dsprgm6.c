#include<stdio.h>
void enqueue(int);
void dequeue();
void display();
int q[100],front=-1,rear=-1,s,choice,val;
void main()
{

    printf("Size of Array:");
    scanf("%d",&s);
    while(1)
{
    printf("***menu***\n");
    printf("\nQUEUE\n1.Insert\n2.Dequeue\n3.Display\n4.EXIT\n");
    printf("enter your choice:");
    scanf("%d",&choice);
switch(choice)
{
    case 1: enqueue(val);
           break;
   case 2: dequeue(val);
           break;
   case 3:display();
          break;
   case 4:exit(0);
	        default: printf("\nWrong selection!!! Please try again!!!\n");
}
}
}
void enqueue(int val)
{
    printf("Enter the element:");
scanf("%d",&val);
    if(front==(rear+1)%s)
    {
        printf("QUEUE IS FULL!!");
    }
    else{
        if(front==-1)
        {
            front=rear=0;
            q[rear]=val;
        }
        else
        {
            rear=(rear+1)%s;
            q[rear]=val;
        }
    }
}

void dequeue()
{
    if(front==-1)
{
    printf("QUEUE IS EMPTY!!");
}
    else
    if(rear==front)
        {
            front=rear=-1;
    }
    else
        front=(front+1)%s;
}
void display()
{
    int i;
    if(front==-1)
{
    printf("QUEUE IS EMPTY!!");
}
    else
       if (rear >= front)
    {
        for ( i = front; i <= rear; i++)
            printf("%d \n",q[i]);
    }
    else
    {
        for ( i = front; i < s; i++)
            printf("%d \n", q[i]);

        for ( i = 0; i <= rear; i++)
            printf("%d \n", q[i]);
    }
}


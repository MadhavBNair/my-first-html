#include<stdio.h>
#include<stdlib.h>
int front=-1,rear=-1,choice,size,item,q[10],i;
void Enqueue();
void Dequeue();
void Display();
void main()
{
	printf("Enter the size of the Queue : ");
	scanf("%d",&size);
	do{
		printf("1.Enqueue \n 2.Dequeue \n 3.Display \n");
		printf("Enter your choice : ");
		scanf("%d",&choice);
		switch(choice) {
			case 1:
            			Enqueue();
            			break;
        			case 2:
            			Dequeue();
            			break;
        			case 3:
            			Display();
            			break;
        			default:
            			printf("Invalid choice\n");
       				 }	
        }while(choice!=4);
        
}
void Enqueue(){
	if(rear==size-1)
	{
		printf("Queue is full\n");
	}
	else if(front==-1 && rear==-1)
	{
		printf("enter the elements : ");
		scanf("%d",&item);
		front=rear=0;
		q[rear]=item;
	}
	else
	{
		rear=rear+1;
		printf("enter the elements : ");
		scanf("%d",&item);
		q[rear]=item;
	}
	printf("\n");
	
}
void Dequeue(){
	if(front==-1 && rear==-1)
	{
		printf("Queue is empty");
	}
	else if(front==rear)
	{
		printf("%d",q[front]);
		front=-1;
		rear=-1;
	}
	else
	{
		printf("%d",q[front]);
		front=front+1;
	}
	printf("\n\n");
}
void Display(){
	if(front==-1 && rear==-1)
	{
		printf("queue is empty");
	}
	else
	{
		for(i=front;i<=rear;i++)
		{
			printf("%d \t",q[i]);
		}
	}
	printf("\n\n");
}

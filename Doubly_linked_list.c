#include<stdio.h>
#include<stdlib.h>

struct node{
    int data;
    struct node *next, *prev;
    };
    
    struct node *head=NULL,*next,*newnode, *temp, *last=NULL, *nextnode, *prevnode;
    int count,pos;

void insertAtFirst()
{
    newnode=malloc(sizeof(struct node));
    printf("Enter data for newnode: ");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {
        head=newnode;
        newnode->next=NULL;
        newnode->prev=NULL;
    }
    else{
        newnode->next=head;
        head->prev=newnode;
        head=newnode;
        newnode->prev=NULL;
    }
}

void insertAtLast()
{
    newnode=malloc(sizeof(struct node));
    printf("Enter data for newnode: ");
    scanf("%d",&newnode->data);
    if(head==NULL)
    {insertAtFirst();}
    else
    {
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->prev=temp;
        newnode->next=NULL;
    }
}

void insertAtPosition()
{
    int i=1;
    newnode=malloc(sizeof(struct node));
    printf("Enter position: ");
    scanf("%d",&pos);
    if(head==NULL)
    {insertAtFirst();}
    else if(pos==1)
    {insertAtFirst();}
    else
    {
      temp=head;    
      while(temp!=NULL)
        {
            temp=temp->next;
            count++;
        }
        if(pos<1||pos>count)
        printf("Invalid position\n");
        else
        {
            printf("Enter data for newnode: ");
            scanf("%d",&newnode->data);
         temp=head;
         while(i<pos-1)
         {
            temp=temp->next;
            i++;
         }
         newnode->next=temp->next;
         temp->next->prev=newnode;
         temp->next=newnode;
         newnode->prev=temp;
        }
        }
    }
void deleteAtFirst()
{
 if(head==NULL)
 {
    printf("Empty linked list\n");
 }
 else if (head->next==NULL)
 {
    temp=head;
    head=NULL;
    free(temp);
 } 
else{
    temp=head;
    head=head->next;
    head->prev=NULL;
    temp->next=NULL;
    free(temp);
}
}

void deleteAtLast()
{
  temp=head;
  while(temp->next!=NULL)
  {
    prevnode=temp;
    temp=temp->next;
  }
  if(head==NULL)
  printf("Empty linked list\n");
  else if(temp==head)
  {
    head=NULL;
    free(temp);
  }
  else
  {
    prevnode->next=NULL;
    temp->prev=NULL;
    free(temp);
  }
}

void deleteAtPosition()
{
  count=1;
  int i=1;
  if(head==NULL)
  printf("Empty linked list\n");
  else{
  temp=head;
  while(temp!=NULL)
  {
    temp=temp->next;
    count++;
  }
  printf("Enter position you want to delete: ");
  scanf("%d",&pos);
  if(pos<1||pos>count)
  printf("Invalid position\n");
  else
  {
   if(pos==1)
   {deleteAtFirst();}
   else if(pos==count)
   {deleteAtLast();}
   else{
    temp=head;
    while(i<pos)
    {
        prevnode=temp;
        temp=temp->next;
        i++;
    }
    prevnode->next=temp->next;
    temp->next->prev=prevnode;
    temp->next=NULL;
    temp->prev=NULL;
    free(temp);
   }
  }
}
}

void display()
{
if(head==NULL)
printf("Empty linked list\n");
else{
printf("Forward Linked list: ");
temp=head;
while(temp!=NULL)
{
printf("%d ",temp->data);
last=temp;
temp=temp->next;
}
printf("\n");
printf("Reverese Linked list: ");
temp=last;
while(temp!=NULL)
{
    printf("%d ",temp->data);
    temp=temp->prev;
}
printf("\n");
}
}

int main()
{
    int ch;
    while(1)
    {
        printf("Enter your choice:\n1)Insert at first\n2)Insert at last\n3)Insert at position\n4)Delete at first\n5)Delete at last\n6)Delete at position\n7)Display\n8)Exit\n");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insertAtFirst();
            break;
            case 2:
            insertAtLast();
            break;
            case 3:
            insertAtPosition();
            break;
            case 4:
            deleteAtFirst();
            break;
            case 5:
            deleteAtLast();
            break;
            case 6:
            deleteAtPosition();
            break;
            case 7:
            display();
            break;
            case 8:
            printf("Exit\n");
            return 0;
            default:
            printf("Invalid choice\n");
        }
    }
    return 0;
}

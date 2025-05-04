#include<stdio.h>
#include<stdlib.h>

struct node{
int data;
struct node *next;
};

struct node *head=NULL,*next,*newnode, *temp, *prevnode, *nextnode;
int count,pos;

void insertAtFirst()
{
newnode=malloc(sizeof(struct node));
printf("Enter the data for newnode: ");
scanf("%d",&newnode->data);

if(head==NULL)
{
head=newnode;
newnode->next=NULL;
}
else
{
newnode->next=head;
head=newnode;
}}

void insertAtLast()
{
newnode=malloc(sizeof(struct node));
printf("Enter data for new node: ");
scanf("%d", &newnode->data);
if(head==NULL)
{
head=newnode;
newnode->next=NULL;
}
else
{
temp=head;
while(temp->next!=NULL)
{
temp=temp->next;
}
temp->next=newnode;
newnode->next=NULL;
}}

void insertAfterPosition()
{
  int count=0,i=0;
  printf("Enter the position after which new node is to be inserted: \n");
  scanf("%d",&pos);
  temp=head;
  while(temp->next!=NULL)
  {
   temp=temp->next;
   count++;
  }
  if(pos<1||pos>count)
  printf("Invalid position\n");
  else{
    newnode=malloc(sizeof(struct node));
    printf("Enter data for new node: ");
    scanf("%d",&newnode->data);
    temp=head;
    while(i<pos)
    {
        temp=temp->next;
        i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
  }
}

void insertAtPosition()
{
  int i=1;
  count=0;
  printf("Enter position on which you want ta insert: ");
  scanf("%d",&pos);
  temp=head;
  while(temp!=NULL)
  {
   temp=temp->next;
   count++;
  }
    if(pos<1||pos>count+1)
    printf("Invalid position\n");
    else{
      newnode=malloc(sizeof(struct node));
      printf("Enter data for newnode: ");
      scanf("%d",&newnode->data);
      if(pos==1){
        insertAtFirst();
      }
      else
      {
        temp=head;
        while(i<pos)
        {
          prevnode=temp;
          temp=temp->next;
          i++;
        }
        prevnode->next=newnode;
        newnode->next=temp;
      }
    }
  }

void deleteAtFirst()
{
if(head==NULL)
printf("Empty linked list\n");
else
{
temp=head;
head=head->next;
temp->next=NULL;
free(temp);
}}

void deleteAtLast()
{
if(head==NULL)
{
printf("Empty linked list\n");
}
else
{
temp=head;
while(temp->next!=NULL)
{
prevnode=temp;
temp=temp->next;
}
if(head==temp)
{
head=NULL;
free(temp);
}
else
{
prevnode->next=NULL;
free(temp);
}}}

void deleteAtPosition()
{
  count=0;
  int i=1;
  if(head==NULL)
  {
    printf("Empty linked list\n"); 
  }
  else{
  temp=head;
  while(temp!=NULL)
  {
    count++;
    temp=temp->next;
  }
  printf("Enter position you want to delete: ");
  scanf("%d",&pos);
  if(pos<1||pos>count)
  printf("Invalid position\n");
  else{
    temp=head;
    if(pos==1)
    {
      deleteAtFirst();
    }
    else{
      temp=head;
      while(i<pos-1)
      {
        temp=temp->next;
        i++;
      }
      nextnode=temp->next;
      temp->next=nextnode->next;
      printf("%d deleted\n",nextnode->data);
      free(nextnode);
    }
  }
}
}

void display()
{
printf("Linked list: ");
temp=head;
while(temp!=NULL)
{
printf("%d ",temp->data);
temp=temp->next;
}
printf("\n");
}


int main()
{
int ch;

while(1){
printf("Operation to perform:\n1)Insert at first\n2)Insert at last\n3)Insert after positin\n4)Insert at position\n5)Delete at first\n6)Delete at last\n7)Delete at Position\n8)Display\n9)Exit\n");
scanf("%d",&ch);

switch (ch)
{
case 1:
insertAtFirst();
break;

case 2:
insertAtLast();
break;

case 3:
insertAfterPosition();
break;

case 4:
insertAtPosition();
break;

case 5:
deleteAtFirst();
break;

case 6:
deleteAtLast();
break;

case 7:
deleteAtPosition();
break;

case 8:
display();
break;

case 9:
printf("Exit");
return 0;

default:
printf("Invalid choice\n");
break;
}}
return 0;
}


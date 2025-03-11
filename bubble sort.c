#include<stdio.h>
#include<string.h>

void bubblesort(char a[])
{   
    int x;
    x=strlen(a);
    int i,j,temp;
    
    for(i=0;i<x-1;i++)
    {
     for(j=0;j<x-i-1;j++)
     {
         if(a[j]>a[j+1])
         {
             temp=a[j];
             a[j]=a[j+1];
             a[j+1]=temp;
         }
     }
    } 
}
int main()
{

    while(1){
 
    printf("\nEnter your choice to sort:\n1.Numbers\n2.String\n3.Exit\nChoice:   ");
    int choice;
    scanf("%d",&choice);

    switch(choice){
        
   case 1:    {        
   int n;
   printf("Enter no. of elements to sort: ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter %d elements to sort: ",n);
   int i,j,temp;
   for(j=0;j<n;j++)
   {
    scanf("%d",&arr[j]);
   }
   for(i=0;i<n-1;i++)
   {
    for(j=0;j<n-i-1;j++)
    {
        if(arr[j]>arr[j+1])
        {
            temp=arr[j];
            arr[j]=arr[j+1];
            arr[j+1]=temp;
        }
    }
   }
   printf("Your sorted elements are: ");
   for(j=0;j<n;j++)
   {
    printf("%d ",arr[j]);
   }break;
}

   case 2:{
   char a[10];
   printf("Enter name to arrange: ");
   scanf("%s",a);
   bubblesort(a);
    printf("%s ",a);
    } break;

case 3:{
    printf("Exit");
} return 0;
break;
default:
    printf("Invalid choice\n");

break;
    }}
   return 0;
   
}
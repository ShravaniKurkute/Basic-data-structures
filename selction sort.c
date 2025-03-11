#include<stdio.h>
#include<string.h>

void selectionsort(char a[])
{   
    int x;
    x=strlen(a);
    int i,j,temp;
    
    for(i=0;i<x-1;i++)
    {
     for(j=i+1;j<x;j++)
     {
         if(a[i]>a[j])
         {
             temp=a[i];
             a[i]=a[j];
             a[j]=temp;
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
    for(j=i+1;j<n;j++)
    {
        if(arr[i]>arr[j])
        {
            temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
        }
    }
   }
   printf("Your sorted elements are: ");
   for(i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }break;
}

   case 2:{
   char a[10];
   printf("Enter name to arrange: ");
   scanf("%s",a);
   selectionsort(a);
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
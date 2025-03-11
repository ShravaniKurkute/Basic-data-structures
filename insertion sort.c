#include<stdio.h>
int main()
{
int n;
   printf("Enter no. of elements to sort: ");
   scanf("%d",&n);
   int arr[n];
   printf("Enter %d elements to sort: ",n);
   int i,j,k,p,temp;
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   }

   for(i=1;i<n;i++)
   { 
    for(j=0;j<i;j++)
    {
        if(arr[j]>arr[i])
    {
       temp=arr[i];
       for(k=i;k>j;k--)
       {
        arr[k]=arr[k-1];
       }    
       arr[j]=temp;
        continue;
    }}
    printf("Pass %d: ",i);
    for(p=0;p<n;p++)
    {
        printf("%d ",arr[p]);
    }
    printf("\n");
}
    
    printf("Your sorted elements are: ");
   for(i=0;i<n;i++)
   {
    printf("%d ",arr[i]);
   }
return 0;  
}
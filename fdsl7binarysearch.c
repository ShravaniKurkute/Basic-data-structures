#include<stdio.h>
int main()
{
    int n;
    printf("Enter no. of array elements: ");
    scanf("%d",&n);
    int arr[n],key,i;
    printf("Enter %d array elements: ",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter element to search: ");
    scanf("%d",&key);
    int low=0,high=n-1, mid;
    int first=-1, last=-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            first=mid;
            high=mid-1;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
      low=0;
      high=n-1;

    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==key)
        {
            last=mid;
            low=mid+1;
        }
        else if(arr[mid]<key)
        {
            low=mid+1;
        }
        else{
            high=mid-1;
        }
    }
      last=high;

    if (first==-1) {
        printf("Element not found in the array.\n");
    } 
    else {
        printf("Element found at indices: ");
        for (int i = first; i <= last; i++) {
            printf("%d ", i);
        }
        printf("\n");
    }

    return 0;
}

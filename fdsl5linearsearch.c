#include <stdio.h>
int main() {
    int n;
    printf("Enter no. of elements");
    scanf("%d",&n);
    int a[n],i;
    printf("Enter %d array elements",n);
    for(i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    int key;
    int flag=-1;
    printf("Enter no. to search");
    scanf("%d",&key);

    for (i = 0; i < n; i++) {
        if (a[i] == key) {
            flag = 0;
            printf("Position: %d\n",i);
            
        }
    }
    if (flag==0) {
        printf("Element found\n");
    } else {
        printf("Element not found\n");
    }
    return 0;
}
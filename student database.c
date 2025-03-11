#include<stdio.h>
#include<string.h>

struct student{
    char name[10];
    int roll;
};
int main()
{
    int i;
    struct student arr[6];

int n;
printf("Enter no. of students: ");
scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter student %d details :\n",i+1);
        printf("Enter student %d name: ",i+1);
        scanf("%s",arr[i].name);
        printf("Enter student %d roll no.: ",i+1);
        scanf("%d",&arr[i].roll);
    }
    
    while(1){
    printf("Enter your choice:\n1.Insertion\n2.Deletion\n3.Updation\n4.Display\n5.Exit\nChoice:   ");
    int choice;
    scanf("%d",&choice);

    switch(choice){
        
        case 1:             //Case 1 Insertion perfectly done...
        printf("Enter the position where you want to add the data from 1 to %d: ",n);
        int p;
        scanf("%d",&p);
        if(p<0||p>n)
        {
            printf("Invalid position\n");
        }
        p=p-1;
        for(i=n;i>=p;i--)
        {
            strcpy(arr[i].name,arr[i-1].name);
            arr[i].roll=arr[i-1].roll;
        }
        printf("Enter new data:\n ");
        printf("Enter new student name: ");
        scanf("%s",arr[p].name);
        printf("Enter student roll no.: ");
        scanf("%d",&arr[p].roll);
        printf("Student details are: \n");
        n++;
        for(i=0;i<n;i++)
        {
            printf("Name of student %d: %s\nRoll no.: %d\n",i+1,arr[i].name,arr[i].roll);
        }
        break;
    
        case 2:               //Case 2 deletion perfectly done...
        printf("Enter the position you want to delete from 1 to %d : ",n);
        int q;
        scanf("%d",&q);
        if(q<0||q>n)
        {
            printf("Invalid position");
        }
        q=q-1;
        for(i=q;i<n-1;i++)
        {
            strcpy(arr[i].name,arr[i+1].name);
            arr[i].roll=arr[i+1].roll;
        }
        n--;
        printf("Student details are: \n");
        for(i=0;i<n;i++)
        {
            printf("Name: %s\nRoll no.: %d\n",arr[i].name,arr[i].roll);
        } 
         break;
    
        case 3: //Case 3 updation perfectly done...
            printf("Student details are: ");
            printf("Student details are: \n");
        for(i=0;i<n;i++)
        {
            printf("Name: %s\nRoll no.: %d\n",arr[i].name,arr[i].roll);
        }
        printf("Enter the position you want to update from 1 to %d: ",n);
        int r;
        scanf("%d",&r);
        
        if(r<0||r>5)
        {
            printf("Invalid position");
        }
        r=r-1;
        char newname[10];
        int newroll;
        printf("Enter new name: ");
        scanf("%s",newname);
        printf("Enter new roll no.: ");
        scanf("%d",&newroll);
        strcpy(arr[r].name,newname);
        arr[r].roll=newroll;

        for(i=0;i<n;i++)
        {
            printf("Name: %s\nRoll no.: %d\n",arr[i].name,arr[i].roll);
        }
    break;
    
        case 4:   //case 4 display perefctly done
        for(i=0;i<n;i++)
        {
            printf("Name: %s\nRoll no.: %d\n",arr[i].name,arr[i].roll);
        }break;
        
        case 5:{  
            printf("Exit");
            return 0;
        }

        default:{
            printf("Invalid choice");
        }
        break;    
    }
    }
    return 0;
}
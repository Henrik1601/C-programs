#include <stdio.h>
int i,j;
int create(int arr[],int size)
{
    printf("\nEnter the elements of the array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    return arr,size;
}
int display(int arr[],int size)
{
    printf("\nDisplaying the array\n");
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
    return arr,size;
}
int insert(int arr[],int size)
{
    int position,value;
    printf("\nEnter the position and value to insert: ");
    scanf("%d %d",&position,&value);
    for(i=size;i>=position-1;i--)
    {
        arr[i]=arr[i-1];
        if(i==position-1)
        {
            arr[i]=value;
        }
    }
    return arr,size;
}
int eliminate(int arr[],int size)
{
    int element,flag=0;
    printf("\nEnter the value to eliminate: ");
    scanf("%d",&element);
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            flag++;
            for(j=i;j<size;j++)
            {
                arr[j]=arr[j+1];
            }
        }
    }
    if(flag==0)
    {
        printf("\nThe value is not presented in the array\n");
    }
    return arr,size;
}
int search(int arr[],int size)
{
    printf("\nEnter the element to search\n");
    int element,flag=0; scanf("%d",&element);
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            flag++;
            printf("\nThe element %d is present in the array of index %d\n",element,i+1);
        }
    }
    if(flag==0)
    {
        printf("\nThe element %d is not presented in the array\n",element);
    }
}
int main()
{
    printf("Enter the size of the array: ");
    int size; scanf("%d",&size);
    int arr[size];
    char *options[]={"Creating an array","Displaying","Inserting an element","Eliminating an element","Search","Exit"};
    while(1!=0)
    {
        printf("\n");
        for(i=0;i<6;i++)
        {
            printf("%d. %s\n",i+1,options[i]);
        }
        printf("\nEnter your choice: ");
        int choice; scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            create(arr,size);
            break;
        case 2:
            display(arr,size);
            break;
        case 3:
            insert(arr,size);
            size++;
            break;
        case 4:
            eliminate(arr,size);
            size--;
            break;
        case 5:
            search(arr,size);
            break;
        case 6:
            printf("\nEXIT");
            return 0;
        default:
            printf("\nEnter the valid choice");
            break;
        }
    }
}

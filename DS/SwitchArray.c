#include <stdio.h>
void create(int arr[],int size)
{
    printf("Enter the elements of array:\n");
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
}
void display(int arr[],int size)
{
       for(int i=0;i<size;i++)
       {
              printf("%d ",arr[i]);
       }
}
void insert(int arr[],int size,int position)
{
    printf("Enter the value to insert in the position %d is:",position);
    int number; scanf("%d",&number);
    for(int i=size;i>=position;i--)
    {
        arr[i]=arr[i-1];
        if(i==position)
        {
            arr[i]=number;
        }
    }
}
void search(int arr[],int size,int element)
{
    int i,count=0;
    for(i=0;i<size;i++)
    {
        if(arr[i]==element)
        {
            printf("The element is found at index %d\n",i+1);
            count++;
        }
    }
    if(count==0)
    {
        printf("The element is not presented in the array");
    }
}
void eliminate(int arr[],int size,int value)
{
    int count=0;
    for(int i=0;i<size;i++)
    {
        if(arr[i]==value)
        {
            count++;
            for(int j=i;j<size;j++)
            {
                arr[j]=arr[j+1];
            }
        }
    }
    if(count==0)
    {
        printf("The value %d is not presented in array",value);
    }
}
int main()
{
    printf("Enter the size of the array: ");
           int size; scanf("%d",&size);
           int arr[size];
while(1!=0)
{
    printf("\nEnter the choice: ");
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
           printf("Size of the array is %d",size);
           printf("\nEnter the position to insert:  ");
           int position; scanf("%d",&position);
           insert(arr,size,position);
           size++;
           break;
       case 4:
           printf("\nEnter the search element: ");
           int search_element;
           scanf("%d",&search_element);
           search(arr,size,search_element);
           break;
       case 5:
           printf("\nEnter the value to eliminate: ");
           int del_number; scanf("%d",&del_number);
           eliminate(arr,size,del_number);
           size--;
           break;
       default:
           printf("Exit");
           return 0;

    }
}
}

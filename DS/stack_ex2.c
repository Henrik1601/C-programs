#include<stdio.h>
void push(int arr[],int num,int index)
{
    arr[index]=num;
}
void manual_push(int arr[], int num,int top)
{
    arr[top+1]=num;
}
void display(int arr[],int top)
{
    for(int i=0;i<=top;i++)
    {
        printf("%d ",arr[i]);
    }
}
int main()
{
    int size; scanf("%d",&size);
    int arr[size];
    int top=-1;
    for(int i=top+1;i<5;i++)
    {
        int num; scanf("%d",&num);
        push(arr,num,i);
        top++;
    }
    int num; scanf("%d",&num);
    manual_push(arr,num,top++);
    size++;
    display(arr,top);
    printf("\nPOP\n");
    top--;
    display(arr,top);
    printf("\nPEEK\n");
    printf("%d",arr[top]);
}

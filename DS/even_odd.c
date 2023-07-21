#include<stdio.h>
int main()
{
    int size; scanf("%d",&size);
    int arr[size],i,j;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2==0)
        {
            printf("%d ",arr[i]);
        }
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]%2!=0)
        {
            printf("%d ",arr[i]);
        }
    }
}

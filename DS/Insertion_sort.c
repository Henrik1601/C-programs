#include <stdio.h>
int main()
{
    int size; scanf("%d",&size);
    int arr[size];
    int i,j;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=1;i<size;i++)
    {
        int temp=arr[i];
        j=i-1;
        while(j>=0 && temp<arr[j])
        {
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=temp;
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}

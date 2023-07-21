#include <stdio.h>

int main()
{
    int size; scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int k;
    scanf("%d",&k);
    int max=0;
    for(int i=0;i<size;i++)
    {
        if(max<arr[i]);
        {
            max=arr[i];
        }
    }
    int secondMax=0;
    for(int i=0;i<size;i++)
    {
        if(secondMax<arr[i] && arr[i]!=max)
        {
            secondMax=arr[i];
        }
    }
    int maxPoss=max+secondMax;
    int count=0;
    for(int i=0;i<size;i++)
    {
        int sum=0;
        for(int j=0;j<size;j++)
        {
            if(i!=j)
            {
                sum+=arr[i]+arr[j];
                if(sum<maxPoss)
            {
                arr[i]=0;
                arr[j]=0;
            }
            else if(sum==maxPoss)
            {
                count++;
                j=size;
            }
            else
            {
                j=size;
            }
            }
        }
    }
    if(count==k)
    {
        printf("true");
    }
    else
    {
        printf("false");
    }
}

#include <stdio.h>
int main()
{
    int size; scanf("%d",&size);
    int arr[size],i,index=0,count=0;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=0;
    for(i=0;i<size;i++)
    {
        if(max<arr[i])
        {
            max=arr[i];
        }
    }
    for(i=0;i<size;i++)
    {
        if(arr[i]==max)
        {
            index=i;
            continue;
        }
        else if(arr[i]*2<=max)
        {
            count++;
        }
        else
        {
            break;
        }
    }
    if(count==size-1)
    {
        printf("%d",index);
    }
    else
    {
        printf("-1");
    }
}

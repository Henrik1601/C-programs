#include <stdio.h>
int main()
{
    int num,i,j; scanf("%d",&num);
    int arr[num],min=0;
    for(i=0;i<num;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<num;i++)
    {
        min=i;
        for(j=i+1;j<num;j++)
        {
            if(arr[min]>arr[j])
            {
                min=j;
            }
        }
        if(min!=i)
        {
                int temp=arr[i];
                arr[i]=arr[min];
                arr[min]=temp;
        }

    }
    for(i=0;i<num;i++)
    {
        printf("%d ",arr[i]);
    }
}

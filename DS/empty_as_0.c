#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int arr[n];
    int i,j;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        j=0;
        if(arr[i]!=0)
        {
            int temp=arr[i];
            for(j=i+1;j<n;j++)
            {
                if(temp==arr[j])
                {
                    arr[i]=arr[i]*2;
                    arr[j]=0;
                }
                else
                {
                    j=n;
                }
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==0 && arr[j]!=0)
            {
                arr[i]=arr[j];
                arr[j]=0;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

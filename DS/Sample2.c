#include <stdio.h>
int main()
{
    int n,i,j; scanf("%d",&n);
    int arr[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        int max=arr[n-1];
        int min=arr[i];
        printf("%d ",max);
        if(i!=n-1)
        {
           printf("%d ",min);
        }
        n--;
    }
}

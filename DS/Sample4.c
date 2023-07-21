#include <stdio.h>
int main()
{
    int n,i,j; scanf("%d",&n);
    int arr[n],o=n-1,e=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(i%2==0&&arr[i]<arr[o])
        {
            int temp=arr[i];
            arr[i]=arr[o];
            arr[o]=temp;
            o-=2;
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

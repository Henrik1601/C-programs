#include <stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        if(a[i]>a[i-1]&&a[i]>a[i+1])
        {
            printf("%d ",a[i]);
            return 0;
        }
    }
    if(a[0]>a[1])
    {
        printf("%d",a[0]);
    }
    else if(a[n-1]>a[n-2])
    {
        printf("%d",a[n-1]);
    }
    return 0;
}

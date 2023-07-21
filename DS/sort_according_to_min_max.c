#include <stdio.h>
int main()
{
    printf("Enter the size of array: ");
    int n; scanf("%d",&n);
    int a[n],res[n],odd=n,even=1,i,j;
    printf("Enter the array elements:\n");
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        for(j=i;j<=n;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for(i=1;i<=n;i++)
    {
        if(i%2==0)
        {
            res[i]=a[even];
            even++;
        }
        else
        {
            res[i]=a[odd];
            odd--;
        }
    }
    for(i=1;i<=n;i++)
    {
        printf("%d ",res[i]);
    }
}

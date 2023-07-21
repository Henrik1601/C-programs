#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int a[n],i,j,count,max=0;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        count=0;
        for(j=1;j<=a[i];j++)
        {
            if(a[i]%j==0)
            {
                count++;
            }
        }
        if(count==2)
        {
            printf("%d ",a[i]);
            max+=a[i];
        }
    }
    printf("\n The addition of prime numbers presented in the array: %d",max);
}

#include <stdio.h>
int main()
{
    int n,m; scanf("%d %d",&n,&m);
    int a[n],b[n],i,j,count=0;
    if(n!=m)
    {
        printf("Not equal");
        return 0;
    }
    else
    {
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the second array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]>b[j])
            {
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==b[i])
        {
            count++;
        }
    }
    }
    if(count==n)
        {
            printf("Equal");
        }
        else
        {
            printf("Not Equal");
        }
        return 0;
}

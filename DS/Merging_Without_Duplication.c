#include <stdio.h>
int main()
{
    int n,m; scanf("%d %d",&n,&m);
    int i,j=0,a[n],b[m],visited=-1;
    printf("Enter the first array:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the second array:\n");
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=n;i<n+m;i++)
    {
        a[i]=b[j];
        j++;
    }
    for(i=0;i<n+m;i++)
    {
        for(j=i+1;j<m+n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n+m;i++)
    {
        for(j=i+1;j<n+m;j++)
        {
            if(a[i]==a[j])
            {
                a[j]=visited;
            }
        }
    }
    for(i=0;i<n+m;i++)
    {
        if(a[i]!=visited)
        {
            printf("%d ",a[i]);
        }
    }
}

#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int a[n],i,j,s=1,in=1;
    printf("Enter the elements:\n");
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<n;i++)
    {
        for(j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    while(s<=n)
    {
        if(s==a[in])
        {
            s++;
            in++;
        }
        else
        {
            printf("The missing element: %d",s);
            s++;
        }
    }
    return 0;
}

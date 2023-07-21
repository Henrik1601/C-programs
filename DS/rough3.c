#include<stdio.h>
int main()
{
    int n,i,j,temp=0,val;
    printf("Enter the size: ");
    scanf("%d",&n);
    int a[n];
    printf("Enter the elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]<a[j])
            {
                val=a[i];
                a[i]=a[j];
                a[j]=val;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        temp=temp*10+a[i];
    }
    printf("Enter the limit: ");
    int limit; scanf("%d",&limit);
    printf("Final output %d",temp+limit);
}

#include<stdio.h>
int main()
{
    int size,max=100,count=0;
    scanf("%d",&size);
    int i,j,a[size],b[size];
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=a[i];
            }
        }
    }

    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(a[i]<b[j])
            {
                a[i]=max;
                count++;
                j=size;
            }
        }
    }
    printf("%d",size-count);

}

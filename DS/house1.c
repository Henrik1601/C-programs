#include<stdio.h>
int main()
{
    int size,count=0;
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
            if(a[i]<=b[j])
            {
                count++;
                b[j]=-1;
            }
        }
    }
    printf("%d",size-count);
}

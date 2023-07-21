#include<stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int size,i=0,j,count,freq; scanf("%d",&size);
    int a[size];
    printf("Enter the elements of array:\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<size;i++)
    {
        for(j=i;j<size;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<size;i++)
    {
        count=0;
        for(j=i+1;j<size;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
            if(count>0)
            {
                printf("%d ",a[i]);
                break;
            }
        }
    }
    return 0;
}

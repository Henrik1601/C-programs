#include<stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int num; scanf("%d",&num);
    int mid=num/2,a[num],i,j,count,visited=-1;
    printf("Enter the elements of the array:\n");
    for(i=0;i<num;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<num;i++)
    {
        for(j=i+1;j<num;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<num;i++)
    {
        count=1;
        for(j=i+1;j<num;j++)
        {
            if(a[i]==a[j])
            {
                count++;
                a[j]=visited;
            }
        }
        if(a[i]!=visited)
        {
            if(count>mid)
            {
                printf("The value %d has the frequency of %d which is greater than the half of the size of array %d",a[i],count,mid);
            }
        }
    }
    return 0;
}

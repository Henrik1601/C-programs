#include <stdio.h>
int main()
{
    int num,i,j,count;
    printf("Enter the size: ");
    scanf("%d",&num);
    int mid=num/2;
    int a[num];
    printf("Enter the elements:\n");
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
                int val=a[i];
                a[i]=a[j];
                a[j]=val;
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
            }
        }
        if(count>mid)
        {
            printf("The value %d has it's frequency %d which is greater than %d",a[i],count,mid);
        }
    }
}

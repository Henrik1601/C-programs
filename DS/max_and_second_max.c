#include<stdio.h>
int main()
{
    printf("Enter the size of the array: ");
    int size,i,j,pos=0,neg=0; scanf("%d",&size);
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
        if(a[i]>=0)
        {
            pos++;
        }
        else
        {
            neg++;
        }
    }
    if(pos>neg)
    {
       printf("The most positive elements are: %d and %d",a[size-2],a[size-1]);
    }
    else if(pos==neg)
    {
        printf("The most positive elements are: %d and %d\n",a[size-2],a[size-1]);
        printf("The most negative elements are: %d and %d",a[1],a[0]);
    }
    else
    {
        printf("The most negative elements are: %d and %d",a[1],a[0]);
    }
    return 0;
}

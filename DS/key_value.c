#include<stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int a[n],i,key;
    printf("Enter the Elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the key index: ");
    scanf("%d",&key);
    for(i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(a[i]>a[j])
            {
                int temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nThe key element: %d",a[key-1]);
    return 0;
}

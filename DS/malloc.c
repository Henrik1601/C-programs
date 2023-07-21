#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n; scanf("%d",&n);
    int *ptr=(int*)malloc(n*sizeof(int));
    if(ptr==NULL)
    {
        exit(1);
    }
    for(i=0;i<n;i++)
    {
        printf("\nEnter the value: ");
        scanf("%d",ptr+i);
    }
    ptr=(int *)realloc(ptr,2*n*(sizeof(int)));
    printf("Enter some more integers:\n");
    if(ptr==NULL)
    {
        exit(1);
    }
    for(i=n;i<2*n;i++)
    {
        printf("\nEnter the value: ");
        scanf("%d",ptr+i);
    }
    for(i=0;i<n*2;i++)
    {
        printf("%d ",*(ptr+i));
    }
}

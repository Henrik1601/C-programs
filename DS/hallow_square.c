#include <stdio.h>
int main()
{
    int i,j,n1,n2; scanf("%d %d",&n1,&n2);
    int a[n1][n2],b[n1][n2];
    printf("First matrix\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
           scanf("%d",&a[i][j]);
        }
    }
    printf("Second matrix\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
           scanf("%d",&b[i][j]);
        }
    }
    printf("Resultant matrix\n");
    for(i=0;i<n1;i++)
    {
        for(j=0;j<n2;j++)
        {
           printf("%d ",a[i][j]+b[i][j]);
        }
        printf("\n");
    }
}

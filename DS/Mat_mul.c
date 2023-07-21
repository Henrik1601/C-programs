#include<stdio.h>
int main()
{
    printf("Enter the size of row and column: ");
    int r,c; scanf("%d %d",&r,&c);
    int a[r][c],b[r][c],mul[r][c],i,j,k;
    printf("Enter the first matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the second matrix elements:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    printf("The resultant matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            mul[i][j]=0;
            for(k=0;k<c;k++)
            {
                mul[i][j]+=a[i][k]*b[k][j];
            }
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",mul[i][j]);
        }
        printf("\n");
    }
}

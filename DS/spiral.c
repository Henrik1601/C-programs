#include <stdio.h>
int main()
{
    int l=0,k=0,m,n,i,j;
    printf("enter the no of rows and columns: ");
    scanf("%d %d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    while(k<m && l<n)
    {
        for(i=l;i<n;i++)
        {
            printf("%d ",a[k][i]);
        }
        k++;
        for(i=k;i<m;i++)
        {
            printf("%d ",a[i][n-1]);
        }
        n--;
        if(k<m)
        {
            for(i=n-1;i>=l;i--)
            {
                printf("%d ",a[m-1][i]);
            }
            m--;
        }
        if(l<n)
        {
            for(i=m-1;i>=k;i--)
            {
                printf("%d ",a[i][l]);
            }
            l++;
        }
    }
    return 0;
}

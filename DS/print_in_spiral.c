#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int i,j,arr[n][n];
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int rowmin=1,rowmax=n;
    int colmin=1,colmax=n;
    while(rowmin<=rowmax && colmin<=colmax)
    {
        for(i=colmin;i<=colmax;i++)
        {
            printf("%d ",arr[rowmin][i]);
        }
        for(i=rowmin+1;i<=rowmax;i++)
        {
            printf("%d ",arr[i][colmax]);
        }
        for(i=colmax-1;i>=colmin;i--)
        {
            printf("%d ",arr[rowmax][i]);
        }
        for(i=rowmax-1;i>=rowmin+1;i--)
        {
            printf("%d ",arr[i][colmin]);
        }
        rowmin++; rowmax--;
        colmin++; colmax--;
    }
}

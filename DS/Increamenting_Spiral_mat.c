#include <stdio.h>
int main()
{
    int n,m,i,j;
    printf("Enter the row size and column size: ");
    scanf("%d %d",&n,&m);
    int arr[n][m],res[n][m];
    printf("Enter the elements of the array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    int rowmin=0,rowmax=n-1,rowfirst=rowmin,rowlast=rowmax;
    int colmin=0,colmax=m-1,colfirst=colmin,collast=colmax;
    while(rowmin<=rowmax && colmin<=colmax)
    {
        for(i=colmin;i<=colmax;i++)
        {
            res[rowmin][i]=arr[rowlast][colmin];
            rowlast--;
        }
        for(i=rowmin+1;i<=rowmax;i++)
        {
            res[i][colmax]=arr[rowmin][colfirst+1];
            colfirst++;
        }
        for(i=colmax-1;i>=colmin;i--)
        {
            res[rowmax][i]=arr[rowfirst+1][colmax];
            rowfirst++;
        }
        for(i=rowmax-1;i>=rowmin+1;i--)
        {
            res[i][colmin]=arr[rowmax][collast-1];
            collast--;
        }
        rowmin++; rowmax--; rowfirst=rowmin; rowlast=rowmax;
        colmin++; colmax--; colfirst=colmin; collast=colmax;
    }
    printf("------------------------------\n");
    printf("The Resultant Array:\n");
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            printf("%d ",res[i][j]);
        }
        printf("\n");
    }
}

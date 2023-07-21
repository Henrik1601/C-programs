#include <stdio.h>
int main()
{
    printf("Enter the number of rows and columns: ");
    int r,c,i,j,count; scanf("%d %d",&r,&c);
    int a[r][c],max=0,output;
    printf("Enter the elements of the matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        count=0;
        for(j=0;j<c;j++)
        {
            if(a[i][j]==1)
            {
                count++;
            }
        }
        if(max<count)
        {
            max=count;
            output=i;
        }
    }
    printf("The row contains maximum of 1's is: %d",output);
}

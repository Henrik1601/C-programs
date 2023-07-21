#include <stdio.h>
int i,j;
int verify(int arr)
{
    int val=0;
    if(arr==1)
    {
        val+=1;
    }
    return val;
}
int main()
{
    int row,col,count=0,max=0,index_i=0,index_j=0;
    scanf("%d %d",&row,&col);
    int arr[row][col];
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=1;i<=row;i++)
    {
        for(j=1;j<=col;j++)
        {
            count=0;
            if(arr[i][j]==1)
            {
                count+=verify(arr[i+1][j]);
                count+=verify(arr[i-1][j]);
                count+=verify(arr[i][j+1]);
                count+=verify(arr[i][j-1]);
                count+=verify(arr[i+1][j+1]);
                count+=verify(arr[i-1][j-1]);
                count+=verify(arr[i-1][j+1]);
                count+=verify(arr[i+1][j-1]);
                if(max<count)
                {
                  index_i=i;
                  index_j=j;
                  max=count;
                }
            }
        }
    }
    printf("%d:%d:%d",index_i,index_j,max);
}

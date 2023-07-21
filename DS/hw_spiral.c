#include <stdio.h>
int main()
{
    int n,i,j; scanf("%d",&n);
    int size=(n*2)-1;
    int arr[size][size];
    int rowmin=1,rowmax=size,colmin=1,colmax=size;
    while(rowmin<=rowmax && colmin<=colmax)
    {
        for(i=rowmin;i<=rowmax;i++)
        {
            for(j=colmin;j<=colmax;j++)
            {
                if(i==rowmin || i==rowmax || j==colmin || j==colmax)
                {
                    arr[i][j]=n;
                }
            }

        }
            n--;
            rowmin++; rowmax--;
            colmin++; colmax--;

    }
    for(i=1;i<=size;i++)
    {
        for(j=1;j<=size;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
}

#include<stdio.h>
int i,j,m,n,k;
int rowcheck(int a[9][9])
{
    int c[10]={0};
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            c[a[i][j]]++;
        }
        for(k=1;k<=9;k++)
        {
            if(c[k]!=1)
            {
                printf("The value %d is repeated %d times in the row %d\n",k,c[k],i+1);
                return 0;
            }
        }
        for(k=1;k<=9;k++)
        {
            c[k]=0;
        }
    }
    return 1;
}
int columncheck(int a[9][9])
{
    int c[10]={0};
    for(i=0;i<9;i++)
    {
        for(j=0;j<9;j++)
        {
            c[a[j][i]]++;
        }
        for(k=1;k<=9;k++)
        {
            if(c[k]!=1)
            {
                printf("The value %d is repeated %d times in the column %d\n",k,c[k],i+1);
                return 0;
            }
        }
        for(k=1;k<=9;k++)
        {
            c[k]=0;
        }
    }
    return 1;
}
int cubecheck(int a[9][9])
{
    int c[10]={0},count=0;
    for(m=0;m<9;m=m+3)
    {
        for(n=0;n<9;n=n+3)
        {
            for(i=m;i<m+3;i++)
            {
                for(j=n;j<n+3;j++)
                {
                    c[a[i][j]]++;
                }
            }
            count++;
            for(k=1;k<=9;k++)
            {
                if(c[k]!=1)
                {
                    printf("The value %d is repeated %d times in the cube\n",k,c[k],count);
                    return 0;
                }
            }
            for(k=1;k<=9;k++)
            {
                c[k]=0;
            }
        }
    }
    return 1;
}
int main()
{
    int a[9][9]={{1,2,3,4,5,6,7,8,9},
                 {4,5,6,7,8,9,1,2,3},
                 {7,8,9,1,2,3,4,5,6},
                 {2,3,4,5,6,7,8,9,1},
                 {5,6,7,8,9,1,2,3,4},
                 {8,9,1,2,3,4,5,6,7},
                 {3,4,5,6,7,8,9,1,2},
                 {6,7,8,9,1,2,3,4,5},
                 {9,1,2,3,4,5,6,7,8}};
    if(rowcheck(a)==1 && columncheck(a)==1 && cubecheck(a)==1)
    {
        printf("It's Sudoko");
    }
    else
    {
        printf("It's not a Sudoko");
    }
}

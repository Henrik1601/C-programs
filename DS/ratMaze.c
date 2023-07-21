#include <stdio.h>
int num;
int isValid(int mat[num][num],int x,int y)
{
    if(x>=0 && x<=num-1 && y>=0 && y<=num-1 && mat[x][y]==1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int maze(int mat[num][num],int x,int y,int sol[num][num])
{
    if(x==num-1 && y==num-1 && mat[x][y]==1)
    {
        sol[x][y]=1;
        return 1;
    }
    else
    {
        if(isValid(mat,x,y)==1)
        {
            if(sol[x][y]==1)
            {
                return 0;
            }
            sol[x][y]=1;
            if(maze(mat,x,y+1,sol)==1)
            {
                return 1;
            }
            if(maze(mat,x+1,y,sol)==1)
            {
                return 1;
            }
            sol[x][y]=0;
            return 0;
        }
    }
    return 0;
}
void defineSolution(int mat[num][num])
{
    int sol[num][num];
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            sol[i][j]=0;
        }
    }
    if(maze(mat,0,0,sol)==0)
    {
        printf("No solution");
    }
    else
    {
        printf("The solution is:\n");
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<num;j++)
            {
                printf("%d ",sol[i][j]);
            }
            printf("\n");
        }
    }
}
int main()
{
    scanf("%d",&num);
    printf("Enter the matrix\n");
    int mat[num][num];
    for(int i=0;i<num;i++)
    {
        for(int j=0;j<num;j++)
        {
            scanf("%d",&mat[i][j]);
        }
    }
    defineSolution(mat);
}

#include <stdio.h>
#include <stdlib.h>

void colorPaint(int mat[8][8], int row, int col, int nonColor, int Color)
{
    if(mat[row][col]!=nonColor)
    {
        return;
    }
    else
    {
        mat[row][col]=Color;
        colorPaint(mat, row+1, col, nonColor, Color);
        colorPaint(mat, row-1, col, nonColor, Color);
        colorPaint(mat, row, col+1, nonColor, Color);
        colorPaint(mat, row, col-1, nonColor, Color);
    }
    return;
}

int main()
{
    int mat[8][8] = {{1, 1, 1, 1, 1, 1, 1, 1},
               {1, 1, 1, 1, 1, 1, 0, 0},
               {1, 0, 0, 1, 1, 0, 1, 1},
               {1, 3, 3, 3, 3, 0, 1, 0},
               {1, 1, 1, 3, 3, 0, 1, 0},
               {1, 1, 1, 3, 3, 3, 3, 0},
               {1, 1, 1, 1, 1, 3, 1, 1},
               {1, 1, 1, 1, 1, 3, 3, 1}};

    int row,col;
    scanf("%d %d",&row,&col);
    int color; scanf("%d",&color);
    int i=row;
    int j=col;
    if(mat[row][col]!=color)
    {
        int nonColor = mat[row][col];
        if(i+1<8 || i-1>=0 || j+1<8 || j-1>=0)
        {
            colorPaint(mat,i+1,j,nonColor,color);
            colorPaint(mat,i-1,j,nonColor,color);
            colorPaint(mat,i,j+1,nonColor,color);
            colorPaint(mat,i,j-1,nonColor,color);
        }
    }

    for(i=0;i<8;i++)
    {
        for(j=0;j<8;j++)
        {
            printf("%d ",mat[i][j]);
        }
        printf("\n");
    }
}

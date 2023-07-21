#include<stdio.h>
#include<limits.h>
int main()
{
    int n=5;
    int p[]={1,2,3,4,3};
    int mat[5][5]={0};
    //
    int dim,q,i,j,k,min;
    for(dim=1;dim<n-1;dim++)
    {
        for(i=1;i<=n-dim;i++)
        {
            j=i+dim;
            min=INT_MAX;
            for(k=1;k<j-1;k++)
            {
                q=(mat[i][k]+mat[k+1][j])+(p[i-1]*p[k]*p[j]);
                if(q<min)
                {
                    min=q;
                }
                mat[i][j]=min;
            }
        }
    }
    printf("Mat Chain %d",mat[i][n-1]);
}

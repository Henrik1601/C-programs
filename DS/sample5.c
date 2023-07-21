#include<stdio.h>
int main()
{
    int i,j,var=1,n; scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            j=1;
            printf("%d ",var);
        }
        else if(i%2==0)
        {
            for(j=0;j<n-(n-(i-1)-1);j++)
            {
                if(j==0)
                {
                    var=1;
                }
                else
                {
                    var=var*(i-j+1)/j;
                }
                printf("%d ",var);
            }
        }
        else
        {
            for(j=0;j<n-(n-i-1);j++)
            {
                if(j==0)
                {
                    var=1;
                }
                else
                {
                    var=var*(i-j+1)/j;
                }
                printf("%d ",var);
            }
        }
        printf("\n");
    }
}

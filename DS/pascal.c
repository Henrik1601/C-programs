#include <stdio.h>
int main()
{
    int n,i,j,space,var; scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(space=0;space<n-i-1;space++)
        {
            printf("  ");
        }
        for(j=0;j<i+1;j++)
        {
            if(j==0)
            {
                var=1;
            }
            else
            {
                var=var*(i-j+1)/j;
            }
            printf("%d   ",var);
        }
        printf("\n");
    }
}

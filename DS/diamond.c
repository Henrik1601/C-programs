#include <stdio.h>
int main()
{
    int i,j,space;
    int n; scanf("%d",&n);
    int size=n,var;
    for(i=0;i<size;i++)
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
    for(i=0;i<size;i++)
    {
        for(space=0;space<=i;space++)
        {
            printf("  ");
        }
        for(j=0;j<n-i-1;j++)
        {
            printf("*   ");
        }
        printf("\n");
    }
}

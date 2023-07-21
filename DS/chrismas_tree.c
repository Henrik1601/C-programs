#include <stdio.h>
int main()
{
    int i,j,space; int n; scanf("%d",&n); int mid=n/2,temp=mid;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            if(j==mid)
            {
                printf("*");
            }
            else
            {
                if(i<=mid)
                {
                for(space=0;space<temp;space++)
                {
                    printf("  ");
                }
                temp--;
                for(j=0;j<=i;j++)
                {
                    printf("* ");
                }
                j+=2;
                }
            }
        }
    }
}

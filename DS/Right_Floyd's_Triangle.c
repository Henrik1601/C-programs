#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int i,j,s,num=n-1;
    for(i=0;i<n;i++)
    {
        for(s=0;s<n-i-1;s++)
        {
            printf("  ");
        }
        for(j=0;j<n-num;j++)
        {
            printf("*   ");
            num--;
        }
        printf("\n");
    }
}

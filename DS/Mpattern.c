#include <stdio.h>

int main()
{
    int n; scanf("%d",&n);
    int mid = (n+1)/2;
    int i, j;
    for (i = 1; i <= n; i++)
    {

        for (j = 1; j <= n; j++)
        {
            if (((j == i || j == n+1 - i) && i <= mid) || j==1 ||j==n)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}

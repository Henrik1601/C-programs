#include <stdio.h>
int main()
{
int n,i,j; scanf("%d",&n);
char arr[n];
scanf("%s",arr);
for(i=0;i<n;i++)
{
    for(j=0;j<n;j++)
    {
        if(i==j||i+j==n-1)
        {
            printf("%c",arr[i]);
        }
        else
        {
            printf(" ");
        }
    }
    printf("\n");
}
}

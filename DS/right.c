#include <stdio.h>
int main()
{
    int num; scanf("%d",&num);
    int i,j,size=num*2-1;
    for(i=1;i<=size;i++)
    {
        if(i<=num)
        {
           for(j=1;j<=i;j++)
           {
              printf("%d ",j);
           }
        }
        else
        {
            for(j=1;j<=size-i+1;j++)
            {
                printf("%d ",j);
            }
        }
        printf("\n");
    }
}

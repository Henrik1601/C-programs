#include <stdio.h>
int main()
{
    int num; scanf("%d",&num);
    int i;
    if(num%2==0)
    {
        for(i=0;i<num;i=i+2)
        {
            if(i==0)
            {
                printf("%d %d ",i,i);
            }
            else
            {
                printf("%d %d ",i,i-1);
            }
        }
    }
    else
    {
        int mid=num/2;
        int j=1;
        for(i=0;i<num;i++)
        {
            if(i==0)
            {
                printf("%d %d ",i,i);
            }
            else
            {
                if(i%2!=0)
                {
                    printf("%d ",i+1);
                }
                else
                {
                    printf("%d ",i-1);
                }
            }
        }
    }
}

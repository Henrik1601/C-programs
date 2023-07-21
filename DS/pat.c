#include <stdio.h>
int main()
{
    int size; scanf("%d",&size);
    int i,j,mid=size/2+1;
    for(i=1;i<=size;i++)
    {
        for(j=1;j<=size;j++)
        {
            if(i==j)
            {
                if(i<=mid && j<=mid)
                {
                    printf("%d",size);
                    size--;
                }
                else
                {
                    size++;
                    printf("%d",size);
                }
            }
        }
    }
}
//INCompelete

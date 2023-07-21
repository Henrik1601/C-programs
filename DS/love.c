#include <stdio.h>
int main()
{
    int i,j,space;
    int num; scanf("%d",&num);
    int mid=num/2;
    for(i=0;i<mid;i++)
    {
        for(space=0;space<mid-i-1;space++)
        {
            printf("  ");
        }
        for(j=0;j<i+2;j++)
        {
            printf("*   ");
        }
        printf(" ");
        for(space=0;space<mid-i-1;space++)
        {
            printf("  ");
        }
        for(j=0;j<i+2;j++)
        {
            printf("*   ");
        }
        printf("\n");
    }

}
/*for(i=0;i<num;i++)
    {
        for(space=0;space<=i;space++)
        {
            printf("  ");
        }
        for(j=0;j<num-i;j++)
        {
            printf("*   ");
        }
        printf("\n");
    }*/

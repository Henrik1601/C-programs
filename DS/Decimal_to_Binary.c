#include <stdio.h>
int main()
{
    int num,rev=0;
    scanf("%d",&num);
    while(num!=0)
    {
        int Q=num/2;
        int R=num%2;
        rev=rev*10+R;
        num=num/2;
    }
    printf("%d",rev);
    return 0;
}

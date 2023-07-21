#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int a[n],i,count=0,count2=0;
    for(i=0;i<n-1;i++)
    {
        scanf("%d",&a[i]);
        count+=a[i];
    }
    for(i=1;i<=n;i++)
    {
        count2+=i;
    }
    printf("The missing element is: %d",(count2-count));
}

#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int i=0,j,greater=0,count=1,index=0;
    int a[n];
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(i<n)
    {
        greater=0;
        int jump=a[i];
        for(j=i+1;j<=jump;j++)
        {
            if(j+a[j]==n-1)
            {
                count++;
                break;
            }
            else
            {
                if(greater<a[j])
                {
                    greater=a[j];
                    index=j;
                }
            }
        }
        i=index;
        count++;
    }
    printf("%d",count);
}

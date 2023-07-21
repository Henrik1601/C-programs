#include <stdio.h>
int check(int l,int n,int num,int a[n])
{
    int mid=(l+n)/2;
    if(num==a[mid])
    {
        return 1;
    }
    else if(num<a[mid])
    {
        n=mid-1;
        check(l,n,num,a);
    }
    else if(num>a[mid])
    {
        l=mid+1;
        check(l,n,num,a);
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,num; scanf("%d %d",&n,&num);
    int a[n],i,flag,l=0;
    for(i=1;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    n=n-1;
    flag=check(l,n,num,a);
    if(flag==1)
    {
        printf("The Element is present");
    }
    else
    {
        printf("The Element is not present");
    }
}

#include <stdio.h>
int checkarray(int first,int last,int a[],int search,int mid)
{
    if(a[mid]==search)
    {
        return 1;
    }
    else if(search<a[mid])
    {
        first=0,last=mid-1;
        mid=(first+last)/2;
        return checkarray(first,last,a,search,mid);
    }
    else if(search>a[mid])
    {
        first=mid+1;
        mid=(first+last)/2;
        return checkarray(first,last,a,search,mid);
    }
    else
    {
        return 0;
    }
    return 0;
}
int main()
{
    int n,i,j,search; scanf("%d %d",&n,&search);
    int arr[n],first=0,last=4;
    int mid=(first+last)/2;
    int flag;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    flag=checkarray(first,last,arr,search,mid);
    if(flag==1)
    {
        printf("Presented!");
    }
    else
    {
        printf("Not Presented");
    }
    return 0;
}

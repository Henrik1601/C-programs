#include <stdio.h>
int main()
{
    int n,i,j,var; scanf("%d",&n);
    int arr[n],temp1,temp2;
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        temp1=arr[i]/10;
        temp1=temp1%10;
        for(j=i+1;j<n;j++)
        {
            temp2=arr[j]/10;
            temp2=temp2%10;
            if(temp1>temp2)
            {
                int constant=arr[i];
                arr[i]=arr[j];
                arr[j]=constant;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

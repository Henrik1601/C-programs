#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int rot; scanf("%d",&rot);
	int i,j,arr[n],temp=0;
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	while(rot!=0)
    {
	for(i=n-1;i>=0;i--)
    {
        if(i==n-1)
        {
            temp=arr[i];
        }
        else
        {
            arr[i+1]=arr[i];
        }
        if(i==0)
        {
            arr[i]=temp;
        }
    }
    rot--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
}

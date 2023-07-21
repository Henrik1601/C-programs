#include <stdio.h>

int main(void) {
	int t; scanf("%d",&t);
	while(t!=0)
	{
	    int n; scanf("%d",&n);
	    int i,j,arr[n],fr[n];
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&arr[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        for(j=i+1;j<n;j++)
	        {
	            if(arr[i]>arr[j])
	            {
	                int temp=arr[i];
	                arr[i]=arr[j];
	                arr[j]=temp;
	            }
	        }
	    }
	    int in=0;
	    for(i=0;i<n;i++)
	    {
	        int count=1;
	        if(arr[i]!=-1)
	        {
	            for(j=i+1;j<n;j++)
	            {
	                if(arr[i]==arr[j])
	                {
	                    count++;
	                    arr[j]=-1;
	                }
	            }
	        }
	        fr[in]=count;
	        in++;
	    }
	    for(i=0;i<in;i++)
	    {
	        for(j=0;j<in;j++)
	        {
	            if(fr[i]==fr[j])
	            {
	                fr[j]=1;
	                fr[i]=1;
	            }
	        }
	    }
	    int max=0;
	    for(i=0;i<in;i++)
	    {
	        if(fr[i]>1)
	        {
	            if(max<fr[i])
	            {
	                max=fr[i];
	            }
	        }
	    }
	    printf("%d\n",max);
	    t--;
	}
	return 0;
}



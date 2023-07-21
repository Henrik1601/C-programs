#include <stdio.h>
int main()
{
    int n; scanf("%d",&n);
    int i,j,a[n],count,fr[n],visited=-1;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;i<n;i++)
        {
            int temp=a[i];
            a[j]=a[i];
            a[i]=temp;
        }
    }
    for(i=0;i<n;i++)
    {
        count=1;
      for(j=i+1;j<n;j++)
      {
              if(a[i]==a[j])
              {
                count++;
                fr[j]=visited;
              }
      }
      if(fr[i]!=visited)
      {
          fr[i]=count;
      }
    }
    for(i=0;i<n;i++)
    {
        if(fr[i]>0)
        {
            printf("%d{%d},",a[i],fr[i]);
        }
    }

}

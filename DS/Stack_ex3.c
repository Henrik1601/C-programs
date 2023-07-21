#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n; scanf("%d",&n);
   int arr[n];
   int top=-1;
   for(int i=0;i<n;i++)
   {
       scanf("%d",&arr[i]);
       top++;
   }
   int ini=0;
   while(ini!=top)
   {
       int temp=arr[top];
       arr[top]=arr[ini];
       arr[ini]=temp;
       top--;
       ini++;
   }
   for(int i=0;i<n;i++)
   {
       printf("%d ",arr[i]);
   }
}

#include <stdio.h>
int main(){
    int n; scanf("%d",&n);
   int a[n];
   for(int i=0;i<n;i++)
   {
       printf("Enter the elements: ");
       scanf("%d",&a[i]);
   }
   if(n%2==0)
   {
       mid=n/2;
   }
   else
   {
       mid=(n/2)+1;
   }
   int j=n-1;
   for(int i=0;i<mid;i++)
   {
       int temp=a[i];
       a[i]=a[j];
       a[j]=temp;
       j--;
   }
   for(int i=0;i<n;i++)
   {
       printf("%d ",a[i]);
   }
   return 0;
}

#include <stdio.h>
#include <math.h>
int main()
{
   int num,val=0,count=0;
   scanf("%d",num);
   while(num!=0)
   {
       int a=num%10;
       if(a==1)
       {
           val+=pow(2,count);
       }
       count++;
       num=num/10;
   }
   printf("%d",val);
   return 0;
}

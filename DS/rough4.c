#include <stdio.h>
#include <math.h>
int main()
{
    int num1,num2,i,val=0,res=0;
    printf("Enter the two numbers: ");
    scanf("%d %d",&num1,&num2);
    int number=pow(num1,num2);
    printf("Enter the K value: ");
    int k; scanf("%d",&k);
    for(i=0;i<k;i++)
    {
        int temp=number%10;
        val=val*10+temp;
        number=number/10;
    }
    while(val!=0)
    {
        int temp=val%10;
        res=res*10+temp;
        val=val/10;
    }
    printf("%d",res);
}

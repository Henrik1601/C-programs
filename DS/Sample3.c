#include <stdio.h>
int main()
{
    int num1,num2,i,j; scanf("%d %d",&num1,&num2);
    int count=1;int temp1=0,temp2=0,temp3=0,temp4=0;
    while(count!=0)
    {
        if(count==1)
        {
            temp1=num1;
            temp2=num2;
            printf("%d %d ",temp1,temp2);
        }
        else
        {
            temp1=num1*count+temp1;
            temp2=num2*count+temp2;
            temp3=num1*count+temp2;
            temp4=num2*count+temp1;
            printf("%d %d %d %d ",temp1,temp2,temp3,temp4);
        }
        count=count*10;
    }
}

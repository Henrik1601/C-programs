#include <stdio.h>
int main()
{
    int number,i,j,count=0,flag=0,index=0,sum=0;
    scanf("%d",&number);
    int arr[number];
    for(i=2;i<=number;i++)
    {
        count=0;
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
            }
        }
        if(count==1)
        {
            arr[index]=i;
            index++;
        }
    }
    for(i=0;i<index-1;i++)
    {
        sum+=arr[i];
        flag++;
        if(sum==number)
        {
            break;
        }
    }
    printf("%d",flag);
}


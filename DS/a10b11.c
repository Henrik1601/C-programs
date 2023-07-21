#include <string.h>
#include <stdio.h>
int main()
{
    char arr[50],temp;
    int i,j,num;
    scanf("%s",arr);
    for(i=0;i<strlen(arr);i++)
    {
        num=0;
        if(arr[i]>='0' && arr[i]<='9')
        {
            temp=arr[i-1];
            while(arr[i]>='0' && arr[i]<='9')
            {
                num=num*10+(arr[i]-48);
                i++;
            }
            for(j=0;j<num;j++)
            {
                printf("%c",temp);
            }
        }
    }

}

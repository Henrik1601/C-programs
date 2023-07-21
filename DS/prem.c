#include <stdio.h>
#include <string.h>
int i,j;
void verify(char arr[],int num)
{
    int size=strlen(arr);
    char *temp=arr;
    for(i=num;i<=num;i++)
    {
        for(j=0;j<size;j++)
        {
            if(num!=j)
            {
                char word=temp[i];
                temp[i]=temp[j];
                temp[j]=word;
                printf("%s\n",temp);
                temp=arr;
            }
        }
    }
}
int main()
{
    char arr[10]; scanf("%s",arr);
    for(i=0;i<strlen(arr);i++)
    {
        verify(arr,i);
    }
    for(i=0;i<strlen(arr);i++)
    {
        printf("%s",arr[i]);
    }
}

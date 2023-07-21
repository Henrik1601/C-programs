#include <stdio.h>
#include <string.h>
void verify(char arr[],int size)
{
    char temp[size]; int index=0;
    for(i=size-1;i>=0;i--)
    {
        if(i>=2)
        {
           temp[index]=arr[i];
           index++;
        }
    }
    for(i)
}
int main()
{
   char arr[10];
   scanf("%s",arr);
   int size=strlen(arr);
   verify(arr,size);
}

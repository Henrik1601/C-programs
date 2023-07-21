#include <stdio.h>
#include <string.h>
int main()
{
    char arr[50];
    scanf("%[^\n]%*c",arr);
    int i,j,index=0;
    for(i=0;arr[i]!='\0';i++)
    {
        if(arr[i]==' ')
        {
            index=i;
        }
    }
    for(i=index+1;i<strlen(arr);i++)
    {
        printf("%c",arr[i]);
    }
}

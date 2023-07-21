#include <stdio.h>
#include <string.h>
int main()
{
    char arr[50],temp,w='W',b='B';
    scanf("%s",arr);
    int i,j,count=0;
    for(i=0;strlen(arr);i++)
    {
        if(arr[i]==b)
        {
            for(j=0;j<2;j++)
            {
               if(strcmp(arr[i+(++j)],w)==1)
               {
                  count++;
                  arr[i+j+1]='A';
               }
            }
            for(j=1;j<=2;i++)
            {
               if(strcmp(arr[i-(++j)],w)==1)
               {
                  count++;
                  arr[i-j-1]='A';
               }
            }
        }
    }
    printf("%d",count);
}

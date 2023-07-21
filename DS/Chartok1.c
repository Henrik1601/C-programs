#include <stdio.h>
#include <string.h>
int main()
{
    char arr[50];
    scanf("%[^\n]%*c",&arr);
    int count=0;
    for(int i=0;i<strlen(arr);i++)
    {
        if(arr[i]=='\0')
        {
            count++;
        }
    }
    printf("%d",count);
    char*word=strtok(arr," ");
    char*pos;
    while(count-1>0)
    {
        printf("%s\n",word);
        word=strtok(NULL," ");
    }
}

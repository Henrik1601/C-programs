#include <stdio.h>
#include <string.h>
int main()
{
    char str[50],temp[50],str_in=0;
    scanf("%[^\n]%*c",&str);
    int size=strlen(str);
    int i,count=0,index;
    for(i=0;i<size;i++)
    {
        if(str[i]==' ')
        {
            index=i;
        }
    }
    for(i=index+1;i<size;i++)
    {
        temp[str_in]=str[i];
        str_in++;
    }
    printf("The last word is \"%s\" with length %d",temp,strlen(temp));
}

#include <stdio.h>
#include <string.h>
int main()
{
    char str[20];
    gets(str);
    for(int i=0;i<strlen(str);i++){
        int num=0;
        if(str[i]>='0' && str[i]<='9'){
            char temp=str[i-1];
            while(str[i]>='0' && str[i]<='9'){
                num=num*10+(str[i]-'0');
                i++;
            }
            for(int j=0;j<num;j++){
                printf("%c",temp);
            }
        }
    }
}

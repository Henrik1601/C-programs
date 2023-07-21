#include <stdio.h>
#include <string.h>
int main()
{
    char str[50];
    gets(str);
    char target = 'l';
    int index = 0;
    for(int i=0;i<strlen(str);i++){
        if(target == str[i]){
            index = i;
        }
    }
    printf("%d",index);
}

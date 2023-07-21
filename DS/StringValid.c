#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isValid(char string[])
{
    bool valid=true;
    char arr[strlen(string)];
    int index=0;
    for(int i=0;i<strlen(string);i++)
    {
        int point;
        char c = string[i];
        if(c=='(')
        {
            arr[index]=c;
            index++;
            point=i;
        }
        if(c==')')
        {
            arr[index]=')';
            if(arr[point]=='(')
            {
                for(int j=point;j<=index;j++)
                {
                    arr[j]='0';
                }
                point--;
            }
            index++;
        }
    }
    for(int i=0;i<index;i++)
    {
        if(arr[i]!='0')
        {
            valid=false;
            break;
        }
    }
    return valid;
}
int main()
{
    char string[10];
    gets(string);
    char res[strlen(string)];
    int index=0;
    for(int i=0;i<strlen(string);i++)
    {
        if(string[i]=='*')
        {
            int count=0;
            string[i]='(';
            if(isValid(string))
            {
                printf("Yes");
                return 0;
            }
            else
            {
                string[i]='*';
                count++;
            }
            string[i]=')';
            if(isValid(string))
            {
                printf("Yes");
                return 0;
            }
            else
            {
                string[i]='*';
                count++;
            }
            string[i]='0';
            if(isValid(string))
            {
                printf("Yes");
                return 0;
            }
            else
            {
                string[i]='*';
                count++;
            }
        }
    }
    printf("NO");
}

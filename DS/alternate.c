#include <stdio.h>
#include <string.h>
void verify(char arr[])
{
    int size=strlen(arr);
    char temp=arr[0]; int count=0;
    for(int i=1;i<size;i++)
    {
        if(arr[i]==temp)
        {
            if(arr[i]=='0')
            {
                arr[i]='1';
            }
            else
            {
                arr[i]='0';
            }
            count++;
        }
        temp=arr[i];
    }
    printf("%d\n",count);
}
int main()
{
    char a[50],b[50];
    scanf("%s",a);
    scanf("%s",b);
    verify(a);verify(b);
}

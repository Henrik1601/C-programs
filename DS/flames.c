#include <stdio.h>
#include <string.h>
int main()
{
    char a[50],b[50]; scanf("%s",a);
    char v[50];
    int i,j,acount=0,bcount=0,tot,count=0,flag;
    scanf("%s",b);
    for(i=0;i<6;i++)
    {
        scanf("%c",&v[i]);
    }
    for(i=0;i<strlen(a);i++)
    {
        for(j=0;j<strlen(b);j++)
        {
             if(a[i]==b[j])
             {
                 a[i]='0';
                 b[j]='0';
                 j=strlen(b);
             }
        }
    }
   for(i=0;i<strlen(a);i++)
   {
       if(a[i]!='0')
       {
           acount++;
       }
   }
   for(j=0;j<strlen(b);j++)
   {
       if(b[j]!='0')
       {
           bcount++;
       }
   }
    tot=acount+bcount;
    printf("%d\n",tot);
    printf("%d",strlen(v));
    int fin=0;
    for(i=0;i<strlen(v);i++)
    {
        count++;
        if(v[i]=='0')
        {
            count--;
        }
        if(count==tot)
        {
            fin++;
            printf("fin %d\n",fin);
            printf("%c\n",v[i]);
            v[i]='0';
            count=0;
            i=i+1;
            if(i>=strlen(v))
            {
                i=1;
            }
            else if(v[i]=='0')
            {
                for(j=i+1;j<strlen(v);j++)
                {
                    if(v[j]!='0')
                    {
                        i=j;
                    }
                    else
                    {
                        i=0;
                    }
                }
            }
        }
            else if(i>=strlen(v)-1)
            {
                i=1;
            }
            if(v[0]=='0')
            {
                for(j=1;j<strlen(v);j++)
                {
                    if(v[i]!='0')
                    {
                        i=j;
                        j=strlen(v);
                    }
                }
            }
    }
}

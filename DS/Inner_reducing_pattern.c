#include<stdio.h>
#define max 100
void print(int s,int a[][max])
{
    for(int i=0;i<s;i++)
    {
        for(int j=0;j<s;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void patternform(int n)
{
    int s=n*2-1;
    int front=0,last=s-1;
    int a[max][max];
    while(n!=0)
    {
        for(int i=front;i<=last;i++)
        {
            for(int j=front;j<=last;j++)
            {
                 if(i==front || i==last || j==front || j==last)
                 {
                     a[i][j]=n;
                 }
            }
        }
        front++;
        last--;
        n--;
    }
    print(s,a);
}
int main()
{
    int n;scanf("%d",&n);
    patternform(n);
}

#include <stdio.h>
int i,j;
void convertion(int arr[],int sec[],int size)
{
    int result[size];
    int index=size-1; int value=0;
    for(i=size-1;i>=0;i--)
    {
        if(index==0)
        {
            result[index]=arr[i]+sec[i]+value;
        }
        else if(result[i]>=10)
        {
            result[i]=arr[i]+sec[i]+value;
            value=result[i];
            result[i]=value%10;
            value=value/10;
        }
        else
        {
            value=0;
        }
    }
    for(i=0;i<size;i++)
    {
        printf("%d ",result[i]);
    }
}
void evaluate(int arr[],int sec[],int row,int col)
{
    int space;
    if(row>col)
    {
        space=row-col;
        col=col+space;
        while(space!=0)
        {
            sec[(col-1)+(space-1)]=0;
            space--;
        }

    }
    else if(col>row)
    {
        space=col-row;
        int ini=space;
        while(space!=0)
        {
            arr[(row-1)+(space-1)]=0;
            space--;
        }
        row=row+ini;
    }
    convertion(arr,sec,row);
}
int main()
{
    int row,col;
    scanf("%d %d",&row,&col);
    int arr[row];
    int sec[col];
    for(i=0;i<row;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<col;i++)
    {
        scanf("%d",&sec[i]);
    }
    evaluate(arr,sec,row,col);
}

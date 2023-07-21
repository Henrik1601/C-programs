#include <stdio.h>
int main()
{
    int size; scanf("%d",&size);
    int arr[size];
    int i,j,pos,neu,neg;
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        if(arr[i]>0)
        {
            pos++;
        }
        else if(arr[i]<0)
        {
            neg++;
        }
        else
        {
            neu++;
        }
    }
    float val1=pos/size;
    printf("%f",pos/size);
}

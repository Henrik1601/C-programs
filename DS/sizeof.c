#include <stdio.h>
int main()
{
    int arr[]={1,1,1,1,1,1};
    int size=sizeof(arr)/sizeof(arr[0]);
    printf("%d",size);
}

#include <stdio.h>
int main()
{
    int arr[] = {1,2,3,6,3,6,1};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<size;i++)
    {
        if(arr[i]!=-1){
            for(int j=0;j<size;j++){
                if(i!=j && arr[i] == arr[j]){
                    printf("%d ",arr[i]);
                    arr[j] = -1;
                }
            }
        }
    }
}

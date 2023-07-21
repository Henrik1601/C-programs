#include <stdio.h>
#include <limits.h>
int main()
{
    int arr[] = {7,10,4,3,20,15};
    int K = 4;
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++)
    {
        for(int  j = i+1; j < size; j++)
        {
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("%d",arr[K-1]);
}

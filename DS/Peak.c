#include <stdio.h>
int main()
{
    int arr[] = {5,10,20,15};
    int size = sizeof(arr)/sizeof(arr[0]);
    if(size<3){
        printf("False");
        return 0;
    }
    int start=0,middle=1,end=2;
    int middleVal=0;
    while(end<size){
        if(arr[start] < arr[middle] && arr[middle] > arr[end]){
            if(arr[middle]>middleVal){
                middleVal = arr[middle];
            }
        }
        start=middle;
        middle=end;
        end++;
    }
    printf("%d",middleVal);
}

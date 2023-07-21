#include <stdio.h>
int main()
{
    int arr[] = {5,1,2,3,4,6};
    int target = 8;
    int size = sizeof(arr)/sizeof(arr[0]);

    if(size<3){
        printf("Triplet Not possible");
        return 0;
    }

    for(int i=0;i<size;i++)
    {
        for(int j=i+1;j<size;j++)
        {
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    int first = 0, second = 1, third = 2;
    int count = 0;
    while(second < size-1 && third < size){
        int temp = arr[first]+arr[second]+arr[third];
        if(temp <= target && ((arr[first]<arr[second])&& (arr[second] < arr[third]))){
            count++;
            printf("%d %d %d\n", arr[first],arr[second],arr[third]);
        }
        if(third == size-1 || second == size-2){
            if(second == size-2){
                first++;
                second = first+1;
                third = second;
            }
            else{
                second = second +1;
                third = second;
            }
        }
        third++;
    }
    printf("%d",count);
}

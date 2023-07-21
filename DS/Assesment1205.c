#include <stdio.h>

int main()
{
    int arr[] = {11,15,26,38,9,10};
    int X = 35;
    int first = 0, second = 1;
    int size = sizeof(arr)/sizeof(arr[0]);
    while(first != size-1)
    {
        if(arr[first]+arr[second] == X && first != second)
        {
            printf("True");
            return 0;
        }
        if(second == size-1)
        {
            first++;
            second = 0;
        }
        second++;
    }
    printf("False");
}

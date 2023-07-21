#include <stdio.h>

int main()
{
    int arr[] = {1,2,3,5};
    int size = sizeof(arr)/sizeof(arr[0]);
    int sum = 0;
    for(int i = 0; i < size; i++)
    {
        sum = 0;
        for(int j = 0; j < size; j++)
        {
            if(i!=j)
            {
                sum+=arr[j];
                if(sum == arr[i])
                {
                    printf("True");
                    return 0;
                }
            }
        }
    }
    printf("False");
}

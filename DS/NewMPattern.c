#include <stdio.h>

int main() {
    int size, i, j;

    printf("Enter the size of the character: ");
    scanf("%d", &size);

    if (size % 2 == 0) {
        printf("Please enter an odd number.\n");
        return 0;
    }

    int mid = (size) / 2;

    for (i = 0; i < size; i++) {
        for (j = 0; j < size; j++) {
            if (j == 0 || j == size-1 || (j == i && j <= mid) || (j == (size-1) - i && j >= mid))
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}


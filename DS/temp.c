#include <stdio.h>
#include <stdlib.h>
//Slanting *
int main()
{
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d", &n);
    for(int i=1;i<=n;i++){
        printf("\n");
        for(j=1;j<=i;j++){
            printf(" ");
        }
        printf("*");
    }
    getch();
}

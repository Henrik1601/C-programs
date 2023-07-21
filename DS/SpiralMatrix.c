
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int matrix[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            scanf("%d",&matrix[i][j]);
        }
    }
    int result[9] = {0};
        int rowmin = 0 , rowmax = 2;
        int colmin = 0 , colmax = 2;
        int index = 0;
        while(rowmin <= rowmax ){

            for(int i=colmin;i<=colmax;i++){
                result[index++] = matrix[rowmin][i];
            }

            for(int i=rowmin+1;i<=rowmax;i++){
                result[index++] = matrix[i][colmax];
            }

            if(colmin < colmax){
                for(int i=colmax-1;i>=colmin;i--){
                    result[index++] = matrix[rowmax][i];
                }
            }

            if(rowmin < rowmax){
                for(int i=rowmax-1;i>=rowmin+1;i--){
                    result[index++] = matrix[i][colmin];
                }
            }
            rowmin++; rowmax--;
            colmin++; colmax--;
        }

    for(int i=0;i<9;i++){
        if(i==0){
            printf("[%d,",result[i]);
        }
        else if(i==8){
            printf("%d]",result[i]);
        }
        else{
            printf("%d,",result[i]);
        }
    }
}

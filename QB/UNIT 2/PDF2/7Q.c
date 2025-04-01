/*

Write a program in C to find the row with maximum number of 1s using functions.
The given 2D array
0 1 0 1 1
1 1 1 1 1
1 0 0 1 0
0 0 0 0 0
1 0 0 0 1

*/

#include <stdio.h>

int main(void) {
    
    int matrix[5][5] = {
        {0,1,0,1,1},
        {1,1,1,1,1},
        {1,0,0,1,0},
        {0,0,0,0,0},
        {1,0,0,0,1}
    };
    
    int maxOnes = 1, maxRows = 0;
    
    int row = sizeof(matrix)/sizeof(matrix[0]);
    int col = sizeof(matrix[0])/sizeof(matrix[0][0]);
    
    for(int i=0; i<row; i++){
        int ones = 0;
        for(int j=0; j<col; j++){
            if (matrix[i][j] == 1){
                ones++;
            }
        }
        if (ones > maxOnes){
            maxOnes = ones;
            maxRows = i;
        }
    }
    printf("Row with maximum ones --> %d", maxRows+1);
    return 0;
}
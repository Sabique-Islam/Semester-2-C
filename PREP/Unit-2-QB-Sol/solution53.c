#include <stdio.h>

int main() {
    
    int row = 5, col = 5, max_ones = 0, max_row = 0;
    
    int matrix[5][5] = {
        {0,1,0,1,1}, 
        {1,1,1,1,1}, 
        {1,0,0,1,0}, 
        {0,0,0,0,0}, 
        {1,0,0,0,1}
    };
    
    for(int i=0; i<row; i++){
        int num_one = 0;
        
        for(int j=0; j<col; j++){
            if (matrix[i][j] == 1){
                num_one ++;
            }
        }
        if (num_one > max_ones) {
            max_ones = num_one;
            max_row = i+1;
        }
    }
    
    printf("The row with the maximum number of 1s is: %d\n", max_row);
    return 0;
}
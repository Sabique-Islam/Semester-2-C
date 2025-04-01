/*

Find the Intersection of two matrices. 

Sample Input :
A[4][4] = 
{{2, 4, 6, 8},
{1, 3, 5, 7},
{8, 6, 4, 2},
{7, 5, 3, 1}};

B[4][4] = 
{{0, 4, 3, 8},
{1, 3, 5, 7},
{8, 3, 6, 2},
{4, 5, 3, 4}};

Sample Output :
* 4 * 8
1 3 5 7
8 * * 2
* 5 3 *

*/

#include <stdio.h>

int main(void) {
    int A[4][4] = {
        {2, 4, 6, 8},
        {1, 3, 5, 7},
        {8, 6, 4, 2},
        {7, 5, 3, 1}
    };
    
    int B[4][4] = {
        {0, 4, 3, 8},
        {1, 3, 5, 7},
        {8, 3, 6, 2},
        {4, 5, 3, 4}
    };

    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            if(A[i][j] != B[i][j]){
                printf("* ");
            }else{
                printf("%d ", A[i][j]);
            }
        }
        printf("\n");
    }
    
}
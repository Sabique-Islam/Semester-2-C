/*

Write a function to solve the Tower of Hanoi problem using recursion.

*/


#include <stdio.h>

void towerOfHanoi(int disk, char from_rod, char to_rod, char aux_rod) {    
    if (disk == 1) {
        printf("Move disk 1 from %c to %c\n", from_rod, to_rod);
        return;
    }
    towerOfHanoi(disk - 1, from_rod, aux_rod, to_rod);
    printf("Move disk %d from %c to %c\n", disk, from_rod, to_rod);
    towerOfHanoi(disk - 1, aux_rod, to_rod, from_rod);
}

int main(void){
    int disk;
    printf("Enter the number of disks --> "); 
    scanf("%d", &disk);
    printf("Tower of Hanoi solution --> \n");
    towerOfHanoi(disk, 'A', 'C', 'B');
    
    return 0;
}
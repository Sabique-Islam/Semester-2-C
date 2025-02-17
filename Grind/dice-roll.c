// Dice roll simulator

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    
    srand(time(NULL)); //seed changes on every run to produce different outcomes.
    
    int num_dice = 5;
    int roll = 0;
    
    for(int i=1; i<=num_dice;i++){
        roll = rand()%6+1;
        printf("Dice %d: %d\n",i,roll);
    }
    return 0;
}
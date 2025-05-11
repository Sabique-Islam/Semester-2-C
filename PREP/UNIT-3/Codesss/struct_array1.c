#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct Pokemon{
    char name[20];
    char tier;
    int hp;
    int attack;
    int speed;
} pkm;

int main(){
    pkm arr[3];

    strcpy(arr[0].name, "Pikachu");
    arr[0].hp = 100;
    arr[0].tier = 'A';
    arr[0].attack = 10;
    arr[0].speed = 10;

    strcpy(arr[1].name, "Bulbasaur");
    arr[1].hp = 100;
    arr[1].tier = 'A';
    arr[1].attack = 10;
    arr[1].speed = 10;

    strcpy(arr[2].name, "Charmander");
    arr[2].hp = 100;
    arr[2].tier = 'A'; 
    arr[2].attack = 10;
    arr[2].speed = 10;

    size_t count = sizeof(arr) / sizeof(arr[0]);
    printf("Number of Pokemon: %zu\n", count); // %zu --> for size_t

    for (size_t i = 0; i < count; i++) // size_t type is an unsigned integer type that's used for sizes and counts, especially when dealing with memory allocation and array indices. It's guaranteed to be large enough to represent the size of any object in memory.
    {
        printf("Pokemon %zu: %s, HP: %d, Attack: %d, Speed: %d, Tier: %c\n",
               i+1, arr[i].name, arr[i].hp, arr[i].attack, arr[i].speed, arr[i].tier);
    }

    return 0;
}
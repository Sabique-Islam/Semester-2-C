#include <stdio.h>

int main(){
    {
        {
            {
                {
                    {
                        printf("Inside 4th block.\n");
                    }
                }
            }

            printf("Inside 2nd block.\n");
        }
    }
    return 0;
}
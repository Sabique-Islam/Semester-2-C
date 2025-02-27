#include <stdio.h>
#include <limits.h>

/*
Expressions

Numbers :  Integer Number,
            short, int, long
           Constants
           Arithmetic - <lvalue> = <rvalue>
            Homogenous
                <lvalue> = <rvalue of the same type>
                10 = 20+30; //invalid
                <int Variable> = <int Expression>

                char (1 byte)
                short (2 bytes)
                int (4 bytes)
                long (8 bytes)

                char C;
                short S;
                int I;
                long L;

                C=C+C;
                S=S+S;
                I=I+I;
                L=L+L;
            
            Heterogenous
                10 = 20+30; //invalid
                <int Variable> = <short Expression>

                char (1 byte)
                short (2 bytes)
                int (4 bytes)
                long (8 bytes)

                char C;
                short S;
                int I;
                long L;

                C=C+C;
                S=C+C;
                I=I+I;
                L=L+L;
*/

char C1 ='A';
char C2 ='B';
unsigned char C3;

int main(){

    printf("\nC1-->%c", C1);
    printf("\nC2-->%c", C2);
    printf("\nC1 as integer-->%d", C1);
    printf("\nC2 as integer-->%d", C2); //ascii

    C3 = C1 + C2; //hetero (C1: int, C2: int, C3: unsigned char)

    printf("\nC3 (C1+C2) as integer-->%d\n",C3);

    return 0; 
}

#include <stdio.h>
#include <stdlib.h>
#include "function.h"

int main(int argc, char *argv[]){

    if(argv[1] != NULL){
        int taille = atoi(argv[1]);

        if(taille < 1){
            printf("Usage: ./star [INT < 1]");
            return EXIT_SUCCESS;
        }

        int totalLength = 2*(2*taille+1)+((2*taille)-1);

        //TOP PART
        for(int i = 0; i < taille; i++){
            if(i==0){
                printSpaces((3*taille)-i);
                printf("*");
                printf("\n");
            }
            else{
                printSpaces((3*taille)-i);
                printStars(i*2-1, '+');
                printf("\n");
            }
        }

        printLines(taille);

        //MIDDLE PART
        printMiddle((2*taille)-1, taille, totalLength);

        printLines(taille);

        //BOTTOM PART
        for(int i = taille-1; i >= 0; i--){
            if(i==0){
                printSpaces((3*taille)-i);
                printf("*");
                printf("\n");
            }
            else{
                printSpaces((3*taille)-i);
                printStars(i*2-1,'+');
                printf("\n");
            }
        }
    }

    return EXIT_SUCCESS;
}
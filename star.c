#include <stdio.h>
#include <stdlib.h>

void printSpaces(int times);
void printTopStars(int times);
void printBottomStars(int times);
void printLines(int taille);
void printMiddle(int times, int taille, int totalLength);
void printReverseStars(int times);

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
                printSpaces((3*taille)-i);
                printf("\n");
            }
            else{
                printSpaces((3*taille)-i);
                printTopStars(i*2-1);
                printSpaces((3*taille)-i);
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
                printSpaces((3*taille)-i);
                printf("\n");
            }
            else{
                printSpaces((3*taille)-i);
                printTopStars(i*2-1);
                printSpaces((3*taille)-i);
                printf("\n");
            }
        }
    }

    return EXIT_SUCCESS;
}

void printSpaces(int times){
    for(int i = 0; i < times; i++){
        printf(" ");
    }
}

void printTopStars(int times){
    printf("*");
    for(int i = 0; i < times; i++){
        printf(" ");
    }
    printf("*");
}

void printBottomStars(int times){
    printf("*");
    for(int i = times; i > 0; i--){
        printf(" ");
    }
    printf("*");
}

void printReverseStars(int times){
    printf("*");
    printSpaces(times);
    printf("*");
}

void printLines(int taille){
    for(int i = 0; i<2*taille+1; i++){
        printf("*");
    }
    printSpaces(2*taille-1);
    for(int i = 0; i<2*taille+1; i++){
        printf("*");
    }
    printf("\n");
}

void printMiddle(int times, int taille, int totalLength){
    int i;
    for(i = 1; i < times/2; i++){
        printSpaces(i);
        printReverseStars(totalLength-2-(2*i));
        printSpaces(i);
        printf("\n");
    }

    for(i; i > 0; i--){
        printSpaces(i);
        printReverseStars(totalLength-2-(2*i));
        printSpaces(i);
        printf("\n");
    }
}
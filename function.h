void printSpaces(int times);
void printStars(int times, char type);
void printLines(int taille);
void printMiddle(int times, int taille, int totalLength);
void printReverseStars(int times);

void printSpaces(int times){
    for(int i = 0; i < times; i++){
        printf(" ");
    }
}

void printStars(int times, char type){
    if(type=='+'){
        printf("*");
        for(int i = 0; i < times; i++){
            printf(" ");
        }
        printf("*");
    }

    if(type=='-'){
        printf("*");
        for(int i = times; i > 0; i--){
            printf(" ");
        }
        printf("*");
    }
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
        printf("\n");
    }

    for(i; i > 0; i--){
        printSpaces(i);
        printReverseStars(totalLength-2-(2*i));
        printf("\n");
    }
}
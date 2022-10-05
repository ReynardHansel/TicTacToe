#include <stdio.h>

char board [3][3];
char PLAYER;
char CPU = 'X';

void inputCharacter();

int main (){
    inputCharacter();


    return 0;
}

void inputCharacter(){
    printf("Enter your character: ");
    scanf("%c", &PLAYER);
    if (PLAYER == 'X')
    {
        CPU = 'O';
    }
}
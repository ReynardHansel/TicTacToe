#include <stdio.h>

char board [3][3];
char PLAYER;
char CPU = 'X';



int main (){
    printf("Enter your character: ");
    scanf("%c", &PLAYER);
    if (PLAYER == 'X')
    {
        CPU = 'O';
    }

    

    return 0;
}
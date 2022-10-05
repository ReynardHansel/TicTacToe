#include <stdio.h>

char board [3][3];
char PLAYER;
char CPU = 'X';

void inputCharacter();
void printBoard();

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

void printBoard(){
    printf(" %c | %c | %c ", board[0][0], board[0][1], board[0][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[1][0], board[1][1], board[1][2]);
    printf("\n---|---|---\n");
    printf(" %c | %c | %c ", board[2][0], board[2][1], board[2][2]);
    printf("\n");
}